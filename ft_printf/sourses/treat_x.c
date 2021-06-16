#include "../include/ft_printf.h"
int	ft_write_x(char *x, t_flags flags)
{
	int count;

	count = 0;
	if (flags.precision >= 0)
		count += work_width(flags.precision - 1, ft_strlen(x) - 1, 1);
	count += ft_putstr(x, ft_strlen(x));
	return (count);
}

int	work_part_x(char *x, t_flags flags)
{
	int count;

	count = 0;
	if (flags.minus == 1)
		count += ft_write_x(x, flags);
	if (flags.precision >= 0 && (size_t)flags.precision < ft_strlen(x))
		flags.precision = ft_strlen(x);
	if (flags.precision >= 0)
	{
		flags.width -= flags.precision;
		count += work_width(flags.width, 0, 0);
	}
	else
		count += work_width(flags.width, ft_strlen(x), flags.zero);
	if (flags.minus == 0)
		count += ft_write_x(x, flags);
	return (count);
}

int	work_x(unsigned ui, int lower, t_flags flags)
{
	char	*x;
	int	count;

	count = 0;
	/*preobrazovanie v tip*/
	ui = (4294967295 + 1 + ui);
	/*potok pust*/
	if (flags.precision == 0 && ui == 0)
	{
		count += work_width(flags.width, 0, 0);
		return (count);
	}
	/*v 16-i vid*/
	x = ft_ull_base(ui, 16);
	/*esli eto 'x' - sdelat' vse strochnimi*/
	if (lower == 1)
		x = ft_str_tolower(x);
	count += ft_put_part_x(x, flags);
	free(x);
	return (count);
}
