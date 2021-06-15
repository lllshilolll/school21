#include "../include/ft_printf.h"
/*tochnost' - zapisat' kol-vo znakov posle '.'*/
int	ft_flag_dot(const char *save, int start, t_flags *flags, va_list aps)
{
	int i;
	/*index = '.'*/
	i = start;
	i++;
	/*esli '*'- zapisat' argument v dot*/
	if (save[i] == '*')
	{
		flags->dot = va_arg(aps, int);
		i++;
	}
	else
	{
		/*poka eto cifra-zapisat' znaki*/
		flags->dot = 0;
		while (ft_isdigit(save[i]))
			flags->dot = (flags->dot * 10) + (save[i++] - '0');
	}
	return (i);
}

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
