#include "../includes/push_swap.h"

void	ra(t_wksp *ds)
{
	if (ds->size_a > 1)
		ds->a_st = ds->a_st->next;
}

void	rb(t_wksp *ds)
{
	if (ds->size_b > 1)
		ds->b_st = ds->b_st->next;
}

void	rr(t_wksp *ds)
{
	if (ds->size_a > 1 && ds->size_b > 1)
	{
		ra(ds);
		rb(ds);
	}
}