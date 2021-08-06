#include "../includes/push_swap.h"
void	begin_sort(t_wksp *ds)
{
	int i;
	
	ds->balance = ds->size_a;
	ds->mid = ds->size_a / 2;
	ds->temp = ds->a_st->prev;
	ds->stop = ds->size_a;
	i = 0;
	while (i < ds->stop)
	{
		if (ds->a_st->order <= ds->mid)
			pb(ds);
		else
			ra(ds);
		i++;
	}
	if (ds->a_st->order <= ds->mid)
		pb(ds);
	sort_stack_b(ds);
}

void	sort_stack_b(t_wksp *ds)
{
	int i;
	ds->last = ds->mid;
	ds->mid = (ds->last - ds->next) / 2;
	ds->mid += ds->next;
	ds->temp_num = ds->size_b;
	i = 0;
	in_sort_stack_b(ds, i);
	if (ds->size_b > 0)
	{
		ds->fl++;
		sort_stack_b(ds);
	}
	sort_stack_a(ds);
}

void	in_sort_stack_b(t_wksp *ds, int i)
{
	while (i < ds->temp_num)
	{
		if (ds->b_st->order > ds->mid)
		{
			ds->b_st->flag = ds->fl;
			pa(ds);
		}
		else
		{
			if (ds->b_st->order == ds->next)
			{
				pa(ds);
				ra(ds);
				ds->next++;
				ds->balance--;
			}
			else
			{
				rb(ds);
			}
		}
		i++;
	}
}

void	sort_stack_a(t_wksp *ds)
{
	if (ds->a_st->flag > 0)
	{
		ds->a_st = ds->a_st->flag;
		while (ds->a_st->flag == ds->fl_ch)
		{
			if (ds->a_st->order == ds->next)
			{
				ra(ds);
				ds->balance--;
				ds->next++;
			}
			else
				pb(ds);
		}
	}
	if (ds->size_b > 0)
	{
		w_mid(ds);
		sort_stack_b(ds);
	}
}

void	sort_second(t_wksp *ds)
{
	int i;

	ds->mid = (ds->size_a - ds->next) / 2;
	ds->mid += ds->next;
	i = 0;
	while (ds->a_st->order != 1)
	{
		if (ds->a_st->order <= ds->mid)
			pb(ds);
		else
		{
			ra(ds);
			i++;
		}
	}
	while (ds->a_st->prev->order != (ds->next - 1))
	{
		if (ds->b_st->order == ds->next)
			rra(ds);
		else
			rrr(ds);
	}
	sort_stack_b(ds);
}