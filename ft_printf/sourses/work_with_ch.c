#include "../include/ft_printf.h"
int	work_with_char(char c, t_flags flags)
{
	int count;

	count = 0;
	/*esli '-' vivodit' srazu*/
	if (flags.minus == 1)
		ft_putchar(c);
	/*dobivaem shirinu*/
	count = work_width(flags.width, 1, 0);
	if (flags.minus == 0)
		ft_putchar(c);
	return (count++);
}
