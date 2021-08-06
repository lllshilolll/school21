#include "../includes/push_swap.h"
//бинарный поиск
int binarysearch(int a, int *mass, int n)
{
    int low, high, middle;
    low = 0;
    high = n - 1;
    while (low <= high)
    {
        middle = (low + high) / 2;
        if (a < mass[middle])
            high = middle - 1;
        else if (a > mass[middle])
            low = middle + 1;
        else 
            return middle;
    }
    return -1;
}
//копирование массива
int *recording_arr(int *int_arr, int size)
{
    int i;
    int *arr;

    arr = (int *)malloc(sizeof(int)*(size));
    i = 0;
    while (i < size)
    {
        arr[i] = int_arr[i];
        i++;
    }
    return arr;
}
//быстрая сортировка
int *quicksort_arr(int arr[], int left, int right)
{
    int pivot; // разрешающий элемент
    int l_hold = left; //левая граница
    int r_hold = right; // правая граница
    pivot = arr[left];
    while (left < right) // пока границы не сомкнутся
    {
        while ((arr[right] >= pivot) && (left < right))
            right--; // сдвигаем правую границу пока элемент [right] больше [pivot]
        if (left != right) // если границы не сомкнулись
        {
            arr[left] = arr[right]; // перемещаем элемент [right] на место разрешающего
            left++; // сдвигаем левую границу вправо
        }
        while ((arr[left] <= pivot) && (left < right))
            left++; // сдвигаем левую границу пока элемент [left] меньше [pivot]
        if (left != right) // если границы не сомкнулись
        {
            arr[right] = arr[left]; // перемещаем элемент [left] на место [right]
            right--; // сдвигаем правую границу вправо
        }
    }
    arr[left] = pivot; // ставим разрешающий элемент на место
    pivot = left;
    left = l_hold;
    right = r_hold;
    if (left < pivot) // Рекурсивно вызываем сортировку для левой и правой части массива
        quicksort_arr(arr, left, pivot - 1);
    if (right > pivot)
        quicksort_arr(arr, pivot + 1, right);
    else 
        return arr;
}
//отсортирован ли массив
int is_sort_array(int *arr, int size)
{
    int i;

    i = 0;
    while (i < size && arr[i + 1])
    {
        if (arr[i] < arr[i + 1])
            i++;
        else
            return(0);
    }
    return(1);
}