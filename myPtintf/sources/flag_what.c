#include "../include/ft_printf.h"

t_flags	ft_flag_minus(t_flags flags)
{
	flags.minus = 1;
	flags.zero = 0;
	return (flags);
}

t_flags	ft_flag_width(va_list aps, t_flags flags)
{
	flags.star = 1;
	flags.width = va_arg(aps, int);
	if (flags.width < 0)
	{
		flags.minus = 1;
		flags.zero = 0;
		flags.width *= -1;
	}
	return (flags);
}

t_flags	ft_flag_digit(char c, t_flags flags)
{
	if (flags.star == 1)
		flags.width = 0;
	flags.width = (flags.width * 10) + (c - '0');
	return (flags);
}

int	ft_flag_precision(const char *str, int start, t_flags *flags, va_list aps)
{
	int	index;

	index = start;
	index++;
	if (str[index] == '*')
	{
		flags->precision = va_arg(aps, int);
		index++;
	}
	else
	{
		flags->precision = 0;
		while (ft_isdigit(str[index]))
			flags->precision = (flags->precision * 10) + (str[index++] - '0');
	}
	return (index);
}
