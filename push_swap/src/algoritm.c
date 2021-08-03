#include "../includes/push_swap.h"
void			ft_error(void)
{
	//ft_putstr_fd("Error\n", 2);
	exit(-1);
}

// Я заносил каждое значение в отдельный лист, оба стека у меня представляют собой двусвязные списки из элементов которые необходимо отсортировать.
// Лист имеет следующие поля:

// int value -> значение которое нужно отсортировать.
// int order -> порядок в котором находится это значение в уже отсортированном массиве.
// int flag -> флаг которым я помечаю, что этот элемент стека А уже был в стеке Б. Эта переменная так же есть в основной структуре, изначально она равна 0, но она всегда увеличивается на единицу как только в стеке Б мы находим значение mid. Зачем объясню позже.
// И ссылки на следующий и предыдущий листы.
t_stack *init(int head)
{
	t_stack *stack;
	stack = (t_stack*)malloc(sizeof(t_stack));
	stack->value = head;
	stack->prev = NULL;
	stack->next = NULL;
	return stack;
}
// struct teacher* temp, * p;
//         temp = (struct teacher*)malloc(sizeof(teacher));
//         p = lst->next; // сохранение указателя на следующий узел
//         lst->next = temp; // предыдущий узел указывает на создаваемый
//         //temp->field = number; // сохранение поля данных добавляемого узла
//         temp->next = p; // созданный узел указывает на следующий узел
//         temp->prev = lst; // созданный узел указывает на предыдущий узел
//         if (p != NULL)
//             p->prev = temp;
//         return(temp);
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