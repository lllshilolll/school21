#include "../includes/push_swap.h"

t_stack *init(int head)
{
	t_stack *stack;
	stack = (t_stack*)malloc(sizeof(t_stack));
	stack->value = head;
	stack->prev = NULL;
	stack->next = NULL;
	return stack;
}

t_stack *add_elem(t_stack *stack, int val)
{
	t_stack *temp;
	temp = (t_stack *)malloc(sizeof(stack));
	if (!(temp))
		return(NULL);
	temp->value = val;//записываем значение 
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
		stack->next->prev = stack;
	}
	return(stack);
}
void listprint(t_stack *stack)
{
	t_stack *p;
	p = stack;
	while (p->next != NULL)
	{
		p = p->next;
	}
	while (p != NULL)
	{
		printf("%d ", p->value); // вывод значения элемента p
		p = p->prev; // переход к предыдущему узлу
	}
	return;
}
int main()
{
	t_stack *stack;
	stack = init(0);
	stack = add_elem(stack, 1);
	stack = add_elem(stack, 2);
	stack = add_elem(stack, 3);
	listprint(stack);
	printf("end");
}