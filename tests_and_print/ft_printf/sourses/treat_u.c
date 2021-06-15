#include "../include/ft_printf.h"
int	ft_in_put_part_uint(char *unsi_int, t_flags flags)
{
	int count;

	count = 0;
	if (flags.dot >= 0)
		count += ft_treat_width(flags.dot - 1, ft_strlen(unsi_int) - 1, 1);
	count += ft_putstrprec(unsi_int, ft_strlen(unsi_int));
	return (count);
}

int	ft_put_part_uint(char *unsi_int, t_flags flags)
{
	int count;

	count = 0;
	if (flags.minus == 1)
		count += ft_in_put_part_uint(unsi_int, flags);
	if (flags.dot >= 0 && (size_t)flags.dot < ft_strlen(unsi_int))
		flags.dot = ft_strlen(unsi_int);
	if (flags.dot >= 0)
	{
		flags.width -= flags.dot;
		count += ft_treat_width(flags.width, 0, 0);
	}
	else
		count += ft_treat_width(flags.width, ft_strlen(unsi_int), flags.zero);
	if (flags.minus == 0)
		count += ft_in_put_part_uint(unsi_int, flags);
	return (count);
}

int	ft_treat_uint(unsigned int unsi, t_flags flags)
{
	char	*unsi_int;
	int	count;

	count = 0;
	/*preobrazovanie v bezznakovi' tip*/
	unsi = (unsigned int)(4294967296 + unsi);
	/*potok pust*/
	if (flags.dot == 0 && unsi == 0)
	{
		count += ft_treat_width(flags.width, 0, 0);
		return (count);
	}
	/*chislo v massiv*/
	unsi_int = ft_u_itoa(unsi);
	count += ft_put_part_uint(unsi_int, flags);
	free(unsi_int);
	return (count);
}
