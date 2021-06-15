#include "../include/ft_printf.h"
int	ft_in_put_part_hexa(char *hexa, t_flags flags)
{
	int count;

	count = 0;
	if (flags.dot >= 0)
		count += ft_treat_width(flags.dot - 1, ft_strlen(hexa) - 1, 1);
	count += ft_putstrprec(hexa, ft_strlen(hexa));
	return (count);
}

int	ft_put_part_hexa(char *hexa, t_flags flags)
{
	int count;

	count = 0;
	if (flags.minus == 1)
		count += ft_in_put_part_hexa(hexa, flags);
	if (flags.dot >= 0 && (size_t)flags.dot < ft_strlen(hexa))
		flags.dot = ft_strlen(hexa);
	if (flags.dot >= 0)
	{
		flags.width -= flags.dot;
		count += ft_treat_width(flags.width, 0, 0);
	}
	else
		count += ft_treat_width(flags.width, ft_strlen(hexa), flags.zero);
	if (flags.minus == 0)
		count += ft_in_put_part_hexa(hexa, flags);
	return (count);
}

int	ft_treat_hexa(unsigned ui, int lower, t_flags flags)
{
	char	*hexa;
	int	count;

	count = 0;
	/*preobrazovanie v tip*/
	ui = (4294967295 + 1 + ui);
	/*potok pust*/
	if (flags.dot == 0 && ui == 0)
	{
		count += ft_treat_width(flags.width, 0, 0);
		return (count);
	}
	/*v 16-i vid*/
	hexa = ft_ull_base(ui, 16);
	/*esli eto 'x' - sdelat' vse strochnimi*/
	if (lower == 1)
		hexa = ft_str_tolower(hexa);
	count += ft_put_part_hexa(hexa, flags);
	free(hexa);
	return (count);
}
