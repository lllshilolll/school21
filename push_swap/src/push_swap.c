#include "../includes/push_swap.h"

//запомнить все индексы отсортированных элементов
//записываем в стек 
t_wksp *make_stack(t_wksp *stack, int *arr, int *sort_arr, int size)
{
    int i;//идем по неотсортированному массиву - берем value 
    int ord;

    i = 0;
    stack->this_swap = 1;  
    stack->size_a = size;
    stack->size_e = stack->size_a;
    stack->size_b = 0;
    extra_stack(stack, sort_arr);
    ord = binarysearch(arr[i], sort_arr, size) + 1;
    stack = init_stack(arr[0], ord);
    while (i++ < size)
    {
        ord = binarysearch(arr[i], sort_arr, size) + 1;
        stack->a_st = add_elem(stack->a_st, arr[i], ord);
    }
    return stack;
}
//создаем массив с входными данными
int *write_array(int argc, char **argv)
{
    int i;
    int *int_arr;
    int k;

    i = 0;
    k = -1;

    int_arr = (int *)malloc(sizeof(int) * (argc - 1));
    while (argc - 1 >= i++)
        int_arr[++k] = ft_atoi(argv[i]);
    return int_arr;
}
int main(int argc, char **argv)
{
    int *int_arr;
    int *sort_arr;
    t_wksp *ds;
    //t_stack *stack;
    if (argc < 2)
        return(0);
    ds = (t_wksp *)(malloc(sizeof(t_wksp)));

    
    int_arr = write_array(argc, argv);
    for (int i = 0; i < argc - 1; i++)
    {
        printf("%d ", int_arr[i]);
    }
    printf("\n");

    if (is_sort_array(int_arr, argc - 1) == 1)
    {
        printf("is sorted\n");
        return (1);//отсортирован
    }
    sort_arr = recording_arr(int_arr, argc - 1);
    sort_arr = quicksort_arr(sort_arr, 0, argc - 2);
    for (int i = 0; i < argc - 1; i++)
    {
        printf("%d ", sort_arr[i]);
    }
        printf("\n");    

    ds = make_stack(ds, int_arr, sort_arr, argc - 1);
    listprint(ds->a_st);
    if (argc - 1 > 5)
    {
        begin_sort(ds);
    }
    else
        min_sort(ds);
    if (!(is_sort_array(ds->a_st, ds->a_st)) && ds->size_a > 5)
        sort_second(ds);
    //проверить отсортирован ли массив 
    
    
   
}