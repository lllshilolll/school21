#include "../includes/push_swap.h"

void	ra(t_wksp *ds)
{
	if (ds->size_a > 1)
		ds->a_st = ds->a_st->next;
	ft_putstr_fd("ra\n", 1);
}

void	rb(t_wksp *ds)
{
	if (ds->size_b > 1)
		ds->b_st = ds->b_st->next;
	ft_putstr_fd("rb\n", 1);
}

void	rr(t_wksp *ds)
{
	if (ds->size_a > 1 && ds->size_b > 1)
	{
		ra(ds);
		rb(ds);
	}
	ft_putstr_fd("->rr\n", 1);
}