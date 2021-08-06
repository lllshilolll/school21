#include "../includes/push_swap.h"
//инициализация стека
t_wksp *init_stack(int head, int ord)
{
	t_wksp *ds;
	ds = (t_wksp*)malloc(sizeof(t_wksp));
	ds->a_st = (t_stack*)malloc(sizeof(t_stack));
	ds->a_st->value = head;
	ds->a_st->prev = NULL;
	ds->a_st->next = NULL;
	ds->a_st->order = ord;
	ds->temp = NULL;
	ds->run = NULL;
	ds->next = 1;
	ds->stop = 0;
	ds->fl = 1;
	ds->vis = 0;
	ds->this_swap = 0;
	printf("init\n");
	return ds;
}
//добавление элемента в стек
t_stack *add_elem(t_stack *stack, int val, int ord)
{
	t_stack *temp;
	temp = (t_stack *)malloc(sizeof(t_stack));
	if (!(temp))
		return(NULL);
	temp->value = val;//записываем значение 
	temp->flag = 0;
	temp->order = ord;
	temp->next = NULL;//ссылка на нуль так как это конец 
	if(stack == NULL)
	{
		stack = temp;
	}
	else
	{
		while (stack->next != NULL)
		{
			stack = stack->next;
		}
		stack->next = temp;
		(stack->next)->prev = stack;
	}
	return(stack);
}
//печать стека
void listprint(t_stack *stack)
{
	t_stack *p;
	p = stack;
	while (p->prev != NULL)
	{
		p = p->prev;
	}
	while (p->next != NULL)
	{
		printf("v:%d o:%d || ", p->value, p->order); // вывод значения элемента p
		p = p->next; // переход к предыдущему узлу
	}
}

void extra_stack(t_wksp *ds, int* sort_arr)
{
	if (!(ds->extra_stack = (int *)malloc(sizeof(int) * ds->size_e)))
		return(0);
	ds->run = ds->a_st;
	ds->extra_stack = sort_arr;
}