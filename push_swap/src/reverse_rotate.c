#include "../includes/push_swap.h"

void	rra(t_wksp *ds)
{
	if (ds->size_a > 1)
		ds->a_st = ds->a_st->prev;
	ft_putstr_fd("rra\n", 1);
}

void	rrb(t_wksp *ds)
{
	if (ds->size_b > 1)
		ds->b_st = ds->b_st->prev;
	ft_putstr_fd("rrb\n", 1);
}

void	rrr(t_wksp *ds)
{
	if (ds->size_a > 1 && ds->size_b > 1)
	{
		rra(ds);
		rrb(ds);
	}
	ft_putstr_fd("->rrr\n", 1);
}