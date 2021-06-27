#include "../include/ft_printf.h"

int	ft_str_prec(t_flags flags, char *str)
{
	int	count;

	count = 0;
	if (flags.precision >= 0)
		count += ft_putstr(str, flags.precision);
	else
		count += ft_putstr(str, ft_strlen(str));
	return (count);
}

int	work_with_str(char *str, t_flags flags)
{
	int	count;

	count = 0;
	if (!str)
		str = "(null)";
	if ((size_t)flags.precision > ft_strlen(str))
		flags.precision = ft_strlen(str);
	if (flags.minus == 1)
		count += ft_str_prec(flags, str);
	if (flags.precision >= 0)
		count += work_width(flags.width, flags.precision, 0);
	else
		count += work_width(flags.width, ft_strlen(str), 0);
	if (flags.minus == 0)
		count += ft_str_prec(flags, str);
	return (count);
}
