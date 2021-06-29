#include "../include/ft_printf.h"

int	ft_x_minus(t_flags flags, char *arr, int len)
{
	int	count;

	count = 0;
	if (flags.precision > len)
		count += work_width(flags.precision, len, 1);
	count += ft_putstr(arr, len);
	return (count);
}

int	ft_width_len_x(t_flags flags, int len)
{
	int	count;

	count = 0;
	if (flags.zero == 1 && flags.precision == -1)
		count += work_width(flags.width, len, 1);
	else
	{
		if (flags.precision > len)
			count += work_width(flags.width, flags.precision, 0);
		else
			count += work_width(flags.width, len, 0);
	}
	return (count);
}

int	ft_x_ne_minus(t_flags flags, char *arr, int len)
{
	int	count;

	count = 0;
	if (flags.precision > len && flags.zero == 0)
		count += work_width(flags.precision, len, 1);
	if (flags.precision > len && flags.zero == 1)
		count += work_width(flags.precision, len, 1);
	count += ft_putstr(arr, len);
	return (count);
}

int	work_with_x(unsigned int ull, int lower, t_flags flags)
{
	int		count;
	size_t	l;
	char	*point;
	int		len;

	count = 0;
	if (ull == 0 && flags.precision == 0)
	{
		count += work_width(flags.width, 0, 0);
		return (count);
	}
	point = ft_base(ull);
	if (lower == 1)
		point = ft_str_tolower(point);
	l = ft_strlen(point);
	len = (int)l;
	if (flags.minus == 1)
		count += ft_x_minus(flags, point, len);
	if (flags.width > len)
		count += ft_width_len_x(flags, len);
	if (flags.minus == 0)
		count += ft_x_ne_minus(flags, point, len);
	free(point);
	return (count);
}
