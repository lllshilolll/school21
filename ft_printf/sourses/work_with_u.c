#include "../include/ft_printf.h"
int	ft_in_part_u(char *u_int, t_flags flags)
{
	int count;

	count = 0;
	if (flags.precision >= 0)
		count += work_width(flags.precision - 1, ft_strlen(u_int) - 1, 1);
	count += ft_putstr(u_int, ft_strlen(u_int));
	return (count);
}

int	ft_part_u(char *u_int, t_flags flags)
{
	int count;

	count = 0;
	if (flags.minus == 1)
		count += ft_in_part_u(u_int, flags);
	if (flags.precision >= 0 && (size_t)flags.precision < ft_strlen(u_int))
		flags.precision = ft_strlen(u_int);
	if (flags.precision >= 0)
	{
		flags.width -= flags.precision;
		count += work_width(flags.width, 0, 0);
	}
	else
		count += work_width(flags.width, ft_strlen(u_int), flags.zero);
	if (flags.minus == 0)
		count += ft_in_part_u(u_int, flags);
	return (count);
}

int	work_u(unsigned int u, t_flags flags)
{
	char	*u_int;
	int	count;

	count = 0;
	/*preobrazovanie v bezznakovi' tip*/
	u = (unsigned int)(4294967296 + u);
	/*potok pust*/
	if (flags.precision == 0 && u == 0)
	{
		count += work_width(flags.width, 0, 0);
		return (count);
	}
	/*chislo v massiv*/
	u_int = ft_u_itoa(u);
	count += ft_part_u(u_int, flags);
	free(u_int);
	return (count);
}
