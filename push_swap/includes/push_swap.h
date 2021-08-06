#ifndef PUSH_SWAP_H
# define PUSH_SWAP_H
#include "../libft/libft.h"
#include <stdio.h>
#include <stdlib.h>

typedef struct s_stack { 

int value;// -> значение которое нужно отсортировать.
int order;// -> порядок в котором находится это значение в уже отсортированном массиве.
int flag;// -> флаг которым я помечаю, что этот элемент стека А уже был в стеке Б. 
//Эта переменная так же есть в основной структуре, изначально она равна 0, 
//но она всегда увеличивается на единицу как только в стеке Б мы находим значение mid. 
//Зачем объясню позже.
//И ссылки на следующий и предыдущий листы.
struct s_stack *next;
struct s_stack *prev;
}t_stack;

typedef struct s_wksp{
    t_stack             *a_st;
    t_stack             *b_st;
    int                 next;
    int					balance;
	int temp_num;
		int					fl_ch;

	t_stack				*temp;
	int					stop;
    int					last;
	int					size_a;
	int					size_b;
	int					size_e;
	int					min;
    t_stack				*run;
    int					mid;
	int					vis;
	int					max;
	int					fl;
	int					this_swap;
    int					*extra_stack;

}t_wksp;
t_wksp *init_stack(int head, int ord);
t_stack *add_elem(t_stack *stack, int val, int ord);
void listprint(t_stack *stack);
int binarysearch(int a, int *mass, int n);
int *recording_arr(int *int_arr, int size);
int *quicksort_arr(int arr[], int left, int right);
int is_sort_array(int *arr, int size);
void	sort_second(t_wksp *ds);

#endif
