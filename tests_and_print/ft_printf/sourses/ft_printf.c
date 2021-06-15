#include "../include/ft_printf.h"

/*inicializiruem flags*/
t_flags	ft_init_flags()
{
	t_flags	flags;

	flags.dot = -1;
	flags.minus = 0;
	flags.star = 0;
	flags.type = 0;
	flags.width = 0;
	flags.zero = 0;
	return (flags);
}

			/*stroka printf, index, flag, 		argumenti posle stroki*/
int	ft_flag_parse(const char *save, int i, t_flags *flags, va_list aps)
{
	/*poka stroka ne zakonchilas'*/
	while (save[i])
	{
		/*esli eto ne chislo i ne [cspdiuxx%] i ne [- 0.*] -vixod*/
		if (!ft_isdigit(save[i]) && !ft_is_in_type_list(save[i])
	 	&& !ft_is_in_flags_list(save[i]))
			break ;
		/*esli eto pervi' 0 i net "-"*/
		if (save[i] == '0' && flags->width == 0 && flags->minus == 0)
			flags->zero = 1;
		/*esli eto tochnost' - zapisat' kol-vo znakov posle '.'*/
		if (save[i] == '.')
			i = ft_flag_dot(save, i, flags, aps);
		/*virovn'at' po levomu*/
		if (save[i] == '-')
			*flags = ft_flag_minus(*flags);
		/*shirina*/
		if (save[i] == '*')
			*flags = ft_flag_width(aps, *flags);
		/*esli eto chislo - */
		if (ft_isdigit(save[i]))
			*flags = ft_flag_digit(save[i], *flags);
		/* [cspdiuxx%]*/
		if (ft_is_in_type_list(save[i]))
		{
			flags->type = save[i];
			break ;
		}
		i++;
	}
	return (i);
}

int	ft_treat_save(const char *save, va_list aps)
{
	int	i;
	t_flags	flags;
	int	count;

	i = 0;
	count = 0;
	while (1)
	{
		flags = ft_init_flags();/*inicializiruu'*/
		if (!save[i]) /*esli stroka zakonchilas' - vixod*/
			break ;
		else if (save[i] == '%' && save[i + 1])/*esli % i sled. est'*/
		{
			/*i = konec stroki ili inexsu [cspdiuxX%]*/
			i = ft_flag_parse(save, ++i, &flags, aps);/*pars so znaka posle %*/
			/* esli [cspdiuxX%] - rabota s tipami*/
			if (ft_is_in_type_list(save[i]))
				count += ft_treatment((char)flags.type, flags, aps);
			/*esli eto ne tip - pechatat' simvol*/
			else if (save[i])
				count += ft_putchar(save[i]);
		}
		/*esli ne '%' - pechatat' simvol*/
		else if (save[i] != '%')
			count += ft_putchar(save[i]);
		i++;
	}
	return (count);
}

int	ft_printf(const char *apFormat, ...)
{
	va_list		aps;
	const char	*save;
	int		count;
	/*perezapis' apFormat v save*/
	save = ft_strdup(apFormat);
	count = 0;
	va_start(aps, apFormat);
	count += ft_treat_save(save, aps);
	va_end(aps);
	free((char *)save);
	return (count);
}
