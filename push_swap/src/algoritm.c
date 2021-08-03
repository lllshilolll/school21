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
	t_stack *p;
	temp = (t_stack *)malloc(sizeof(stack));
	if (!(temp))
		return(NULL);
	p = stack->next;
	stack->next = temp;
	temp->value = val;
	temp->next = p;
	temp->prev = stack;
	if (p != NULL)
	{
		p->prev = temp;
	}
	return(temp);
}
void listprint(t_stack *stack)
{
  t_stack *p;
  p = stack;
  while (p->next != NULL)
    p = p->next;  // переход к концу списка
  do {
    printf("%d ", p->value); // вывод значения элемента p
    p = p->prev; // переход к предыдущему узлу
  } while (p != NULL); // условие окончания обхода
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