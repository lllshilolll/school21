#include "../includes/push_swap.h"

void	sa(t_wksp *ds)
{
	int temp_val;

	if (ds->size_a > 1)
	{
		temp_val = ds->a_st->value;
		ds->a_st->value = ds->a_st->next->value;
		ds->a_st->next->value = temp_val;
		temp_val = ds->a_st->order;
		ds->a_st->order = ds->a_st->next->order;
		ds->a_st->next->order = temp_val;
		temp_val = ds->a_st->flag;
		ds->a_st->flag = ds->a_st->next->flag;
		ds->a_st->next->flag = temp_val;
	}
}

void	sb(t_wksp *ds)
{
	int temp_val;

	if (ds->size_b > 1)
	{
		temp_val = ds->b_st->value;
		ds->b_st->value = ds->b_st->next->value;
		ds->b_st->next->value = temp_val;
		temp_val = ds->b_st->order;
		ds->b_st->order = ds->b_st->next->order;
		ds->b_st->next->order = temp_val;
		temp_val = ds->b_st->flag;
		ds->b_st->flag = ds->b_st->next->flag;
		ds->b_st->next->flag = temp_val;
	}
}

void	ss(t_wksp *ds)
{
	sa(ds);
	sb(ds);
}