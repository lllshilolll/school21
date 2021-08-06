#include "../includes/push_swap.h"

void	pb(t_wksp *ds)
{
	if (ds->size_a > 0)
	{
		ds->run = ds->a_st;
		ds->a_st->next->prev = ds->a_st->prev;
		ds->a_st->prev->next = ds->a_st->next;
		ds->a_st = ds->a_st->next;
		ds->size_a--;
		if (ds->size_b == 0)
		{
			ds->b_st = ds->run;
			ds->b_st->next = ds->b_st;
			ds->b_st->prev = ds->b_st;
			ds->size_b++;
		}
		else
			pb_p(ds);
		if (ds->size_a == 0)
			ds->a_st = NULL;
	}
}

void	pb_p(t_wksp *ds)
{
	ds->run->next = ds->b_st;
	ds->run->prev = ds->b_st->prev;
	ds->b_st->prev->next = ds->run;
	ds->b_st->prev = ds->run;
	ds->b_st = ds->run;
	ds->size_b++;
}

void	pa(t_wksp *ds)
{
	if (ds->size_b > 0)
	{
		ds->run = ds->b_st;
		ds->b_st->next->prev = ds->b_st->prev;
		ds->b_st->prev->next = ds->b_st->next;
		ds->b_st = ds->b_st->next;
		ds->size_b--;
		if (ds->size_a == 0)
		{
			ds->a_st = ds->run;
			ds->a_st->next = ds->a_st;
			ds->a_st->prev = ds->a_st;
			ds->size_a++;
		}
		else
			pa_p(ds);
		if (ds->size_b == 0)
			ds->b_st = NULL;
	}
}

void	pa_p(t_wksp *ds)
{
	ds->run->next = ds->a_st;
	ds->run->prev = ds->a_st->prev;
	ds->a_st->prev->next = ds->run;
	ds->a_st->prev = ds->run;
	ds->a_st = ds->run;
	ds->size_a++;
}
