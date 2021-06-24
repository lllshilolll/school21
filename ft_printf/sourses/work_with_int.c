#include "../include/ft_printf.h"
int	ft_in_write_int(char *arr_i, int i, t_flags flags)
{
	int count;

	count = 0;
	if (i < 0 && flags.precision >= 0)
		ft_putchar('-');
	if (flags.precision >= 0)
		count += work_width(flags.precision, ft_strlen(arr_i), 1);
	count += ft_putstr(arr_i, ft_strlen(arr_i));
	return (count);
}

int	ft_write_int(char *arr_i, int i, t_flags flags)
{
	int count;

	count = 0;
	if (flags.minus == 1)
		count += ft_in_write_int(arr_i, i, flags);
	if (flags.precision >= 0 && (size_t)flags.precision < ft_strlen(arr_i))
		flags.precision = ft_strlen(arr_i);
	if (flags.precision >= 0)
	{
		flags.width -= flags.precision;
		count += work_width(flags.width, 0, 0);
	}
	else
		count += work_width(flags.width, ft_strlen(arr_i), flags.zero);
	if (flags.minus == 0)
		count += ft_in_write_int(arr_i, i, flags);
	return (count);
}

int	work_with_int(int i, t_flags flags)
{
	char	*arr_i;
	long int	save_i;
	int	count;

	save_i = i;
	count = 0;
	if (flags.precision == 0 && i == 0)
	{
		count += work_width(flags.width, 0, 0);
		return (count);
	}
	if (save_i < 0 && (flags.precision >= 0 || flags.zero == 1))
	{
		if (flags.zero == 1 && flags.precision == -1)
			ft_putstr("-", 1);
		save_i *= -1;
		flags.zero = 1;
		flags.width--;
		count++;
	}
	arr_i = ft_itoa(save_i);
	count += ft_write_int(arr_i, i, flags);
	free(arr_i);
	return (count);
}
