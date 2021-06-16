#include "../include/ft_printf.h"
int	ft_in_write_int(char *arr_i, int save_i, t_flags flags)
{
	int count;

	count = 0;
	if (save_i < 0 && flags.precision >= 0)
		ft_putchar('-');
	/*esli ukazana tochnost' dobivaem sleva '0'*/
	if (flags.precision >= 0)
		count += work_width(flags.precision - 1, ft_strlen(arr_i) - 1, 1);
	/*pechataem*/
	count += ft_putstr(arr_i, ft_strlen(arr_i));
	return (count);
}

int	ft_write_int(char *arr_i, int save_i, t_flags flags)
{
	int count;

	count = 0;
	/*esli '-' srazu pechataem*/
	if (flags.minus == 1)
		count += ft_in_write_int(arr_i, save_i, flags);
	/*esli tichnost' < len precision = len*/
	if (flags.precision >= 0 && (size_t)flags.precision < ft_strlen(arr_i))
		flags.precision = ft_strlen(arr_i);
	/*esli precision biggg*/
	if (flags.precision >= 0)
	{
		flags.width -= flags.precision;
		count += work_width(flags.width, 0, 0);
	}
	else
		count += work_width(flags.width, ft_strlen(arr_i), flags.zero);
	if (flags.minus == 0)
		count += ft_in_write_int(arr_i, save_i, flags);
	return (count);
}

int	work_with_int(int i, t_flags flags)
{
	char	*arr_i;
	int	save_i;
	int	count;

	save_i = i;
	count = 0;
	/*esli '0' shirinu dobivaem ' '-mi*/
	if (flags.precision == 0 && i == 0)
	{
		count += work_width(flags.width, 0, 0);
		return (count);
	}
	/*esli i<0 i (ili tochnost' ukazana ili nado zapolnit' '0'-mi*/
	if (i < 0 && (flags.precision >= 0 || flags.zero == 1))
	{
		/*esli est' %0 i i<0 i net tochnosti*/
		if (flags.zero == 1 && flags.precision == -1)
			ft_putstr("-", 1);
		i *= -1;
		flags.zero = 1;
		flags.width--;
		count++;
	}
	/*zagon'aem chislo v massiv*/
	arr_i = ft_itoa(i);
	count += ft_write_int(arr_i, save_i, flags);
	free(arr_i);
	return (count);
}
