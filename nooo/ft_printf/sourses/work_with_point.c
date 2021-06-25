#include "../include/ft_printf.h"

int	ft_write_point(char *point, t_flags flags)
{
	int count;
	size_t len;

	len = ft_strlen(point);
	count = 0;
	count += ft_putstr("0x", 2);
	if (flags.precision >= 0)
	{
		count += work_width(flags.precision, len, 1);
		count += ft_putstr(point, flags.precision);
	}
	else
		count += ft_putstr(point, len);
	return (count);
}

int	work_with_point(unsigned long long p, t_flags flags)
{
	char			*point;
	int				count;
	size_t			len;

	count = 0;
	if (p == 0 && flags.precision == 0)
	{
		count += ft_putstr("0x", 2);
		return (count += work_width(flags.width, 0, 1));
	}
<<<<<<< HEAD

	/*massiv chisla v 16-forme*/

	point = ft_base(p, 16);
	printf("ft_base: %s\n", point);

	/*zaglavnie v strochnie*/

	point = ft_str_tolower(point);
	printf("lower: %s\n", point);

	/*njchnost' < len*/

=======
	point = ft_base(p, 16);
	point = ft_str_tolower(point);
>>>>>>> 7d4867cf944203c8f25f0cca5f002770e5e0662d
	len = ft_strlen(point);
	if ((size_t)flags.precision < len)
		flags.precision = len;
	if (flags.minus == 1)
		count += ft_write_point(point, flags);
	count += work_width(flags.width, len + 2, 0);
	if (flags.minus == 0)
		count += ft_write_point(point, flags);
	free(point);
	return (count);
}