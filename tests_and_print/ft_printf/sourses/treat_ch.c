#include "../include/ft_printf.h"
int	ft_treat_char(char c, t_flags flags)
{
	int count;

	count = 0;
	/*esli '-' vivodit' srazu*/
	if (flags.minus == 1)
		ft_putchar(c);
	/*dobivaem shirinu*/
	count = ft_treat_width(flags.width, 1, 0);
	if (flags.minus == 0)
		ft_putchar(c);
	return (count + 1);
}
