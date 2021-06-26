#include "../include/ft_printf.h"

int		work_u(unsigned int unsi, t_flags flags)
{
	unsi =1;
	flags.minus = 1;

	return(0);
}
int	work_x(unsigned int ui, int lower, t_flags flags)
{
	ui = 1;
	lower =1;
	flags.minus = 1;

	return(0);
}
int	work_with_percent(t_flags flags)
{
	flags.minus = 1;

	return (0);
}
