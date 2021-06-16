#include "../include/ft_printf.h"

/*esli '-' and '0' - flags.zero = 0*/
t_flags	ft_flag_minus(t_flags flags)
{
	flags.minus = 1;
	flags.zero = 0;
	return (flags);
}

/*zapisat' argument v width*/
t_flags	ft_flag_width(va_list aps, t_flags flags)
{
	flags.star = 1;
	flags.width = va_arg(aps, int);
	/*esli argumen < 0 - virovn'at' po levomu*/
	if (flags.width < 0)
	{
		flags.minus = 1;
		flags.width *= -1;
	}
	return (flags);
}

t_flags	ft_flag_digit(char c, t_flags flags)
{
	/*esli est''*' - obnulit' shirinu
	 * shirina = chisla v stroke*/
	if (flags.star == 1)
		flags.width = 0;
	flags.width = (flags.width * 10) + (c - '0');
	return (flags);
}

/*tochnost' - zapisat' kol-vo znakov posle '.'*/
int	ft_flag_precision(const char *str, int start, t_flags *flags, va_list aps)
{
	int index;
	/*index = '.'*/
	index = start;
	index++;
	/*esli '*'- zapisat' argument v precision*/
	if (str[index] == '*')
	{
		flags->precision = va_arg(aps, int);
		index++;
	}
	else
	{
		/*poka eto cifra-zapisat' znaki*/
		flags->precision = 0;
		while (ft_isdigit(str[index]))
			flags->precision = (flags->precision * 10) + (str[index++] - '0');
	}
	return (index);
}
