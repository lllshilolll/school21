#include "../include/ft_printf.h"
int	work_with_percent(t_flags flags)
{
	int	count;

	count = 0;
	if (flags.minus == 1)
		count += ft_putstr("%", 1);
	count += work_width(flags.width, 1, flags.zero);
	if (flags.minus == 0)
		count += ft_putstr("%", 1);
	return (count);
}
