#include "../include/ft_printf.h"

/*inicializiruem flags*/
t_flags	clean_flags()
{
	t_flags	flags;

	flags.precision = -1;
	flags.minus = 0;
	flags.star = 0;
	flags.type = 0;
	flags.width = 0;
	flags.zero = 0;
	return (flags);
}

			/*stroka printf, index, flag, 		argumenti posle stroki*/
int	ft_flag_parse(const char *str, int i, t_flags *flags, va_list aps)
{
	/*poka stroka ne zakonchilas'*/
	while (str[i])
	{
		/*esli eto ne chislo i ne [cspdiuxx%] i ne [- 0.*] -vixod*/
		if (!ft_isdigit(str[i]) && !ft_is_type(str[i]) && !ft_is_flags(str[i]))
			break ;
		/*esli eto pervi' 0 i net "-"*/
		if (str[i] == '0' && flags->width == 0 && flags->minus == 0)
			flags->zero = 1;
		/*esli eto tochnost' - zapisat' kol-vo znakov posle '.'*/
		if (str[i] == '.')
			i = ft_flag_precision(str, i, flags, aps);
		/*virovn'at' po levomu*/
		if (str[i] == '-')
			*flags = ft_flag_minus(*flags);
		/*shirina*/
		if (str[i] == '*')
			*flags = ft_flag_width(aps, *flags);
		/*esli eto chislo - */
		if (ft_isdigit(str[i]))
			*flags = ft_flag_digit(str[i], *flags);
		/* [cspdiuxx%]*/
		if (ft_is_type(str[i]))
		{
			flags->type = str[i];
			break ;
		}
		i++;
	}
	return (i);
}

int	work_with_apFormat(const char *str, va_list aps)
{
	int	i;
	t_flags	flags;
	int	count;

	i = 0;
	count = 0;
	while (1)
	{
		flags = clean_flags();/*inicializiruu'*/
		if (!str[i]) /*esli stroka zakonchilas' - vixod*/
			break ;
		else if (str[i] == '%' && str[i + 1])/*esli % i sled. est'*/
		{
			/*i = konec stroki ili =index-u [cspdiuxX%]*/
			i = ft_flag_parse(str, ++i, &flags, aps);/*pars so znaka posle %*/
			/* esli [cspdiuxX%] - rabota s tipami*/
			if (ft_is_type(str[i]))
				count += what_type(flags.type, flags, aps);
			/*esli eto ne tip - pechatat' simvol*/
			else if (str[i])
				count += ft_putchar(str[i]);
		}
		/*esli ne '%' - pechatat' simvol*/
		else if (str[i] != '%')
			count += ft_putchar(str[i]);
		i++;
	}
	return (count);
}

int	ft_printf(const char *apFormat, ...)
{
	va_list		aps;
	const char	*str;
	int		count;
	/*perezapis' apFormat v save*/
	str = ft_strdup(apFormat);
	count = 0;
	va_start(aps, apFormat);
	count += work_with_apFormat(str, aps);
	va_end(aps);
	free((char *)str);
	return (count);
}
