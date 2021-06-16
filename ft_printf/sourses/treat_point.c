#include "../include/ft_printf.h"

int	ft_write_pointer(char *point, t_flags flags)
{
	int count;

	count = 0;
	/*pechat' - pervie 2 simvola*/
	count += ft_putstr("0x", 2);
	/*tochnost'*/
	if (flags.precision >= 0)
	{
		/*zapisivaem '0' do tochnosti*/
		count += work_width(flags.precision, ft_strlen(point), 1);
		/*ostatok pechatat'*/
		count += ft_putstr(point, flags.precision);
	}
	/*prosto pechat' pointer*/
	else
		count += ft_putstr(point, ft_strlen(point));
	return (count);
}

int	work_with_point(unsigned long p, t_flags flags)
{
	char	*point;
	int	count;

	count = 0;
	/*esli 'null'*/
	if ((unsigned)p == 0 && flags.precision == 0)
	{
		/*print 0x + dobit' shirinu '0'*/
		count += ft_putstr("0x", 2);
		return (count += work_width(flags.width, 0, 1));
	}
	/*massiv chisla v 16-forme*/
	point = ft_base((unsigned)p, 16);
	/*zaglavnie v strochnie*/
	point = ft_str_tolower(point);
	/*njchnost' < len*/
	if ((size_t)flags.precision < ft_strlen(point))
		flags.precision = ft_strlen(point);
	if (flags.minus == 1)
		count += ft_write_point(point, flags);
	count += work_width(flags.width, ft_strlen(point) + 2, 0);
	if (flags.minus == 0)
		count += ft_write_point(point, flags);
	free(point);
	return (count);
}
