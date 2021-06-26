#include "../include/ft_printf.h"
#include <stdio.h>
int lennum(long int i)
{
    int count;
    
    count = 1;
    if (i < 0)
    {
        count++;
        i *= (-1);
    }
    
    while(i >= 10)
    {
        i = i/10;
        count++;
    }
    return (count);
}

int ft_int_minus(long int li, t_flags flags, int flag)
{
    int count;
    int kol;
    char *arr;
    
    kol = lennum(li);
    count = 0;
    if (flags.precision > kol && flags.precision >= 0)
    {
        if (li < 0)
        {
            count += ft_putchar('-');
            li = li * (-1);
            flag = 1;
        }
        count += work_width(flags.precision + flag, kol, 1);
    }
    arr = ft_itoa(li);
    count += ft_putstr(arr, kol);
    if (flags.width > kol && flags.width > flags.precision)
    {
        if (flags.precision > kol)
            count += work_width(flags.width, flags.precision + flag, 0);
        else
            count += work_width(flags.width, kol, 0);
    }
    free(arr);
    return (count);
}
int ft_int_ne_minus(long int li, t_flags flags, int flag)
{
    int count;
    int kol;
    char *arr;
       
    kol = lennum(li);
    count = 0;

    if (flags.width > kol && flags.precision < flags.width && flags.precision >= 0)
    {
        if (li < 0)
            flag = 1;
        if (flags.precision > kol)
            count += work_width(flags.width - flag, flags.precision , 0);
        else
            count += work_width(flags.width, kol, 0);
    }
    if (flags.zero == 1 || flags.precision > kol)
    {
        if (li < 0)
        {
            count += ft_putchar('-');
            li = li * (-1);
            flag = 1;
        }
        if (flags.precision > kol)
            count += work_width(flags.precision + flag, kol, 1);
    }
    if (flags.width > kol && flags.precision == -1)
        count += work_width(flags.width, kol, flags.zero);
    arr = ft_itoa(li);
    count += ft_putstr(arr, kol);
    
    free(arr);
    return (count);
}

int work_with_int(int i, t_flags flags)
{
    int count;
    int kol;
    long int li;
    int flag;
    
    li = i;
    count = 0;
    kol = lennum(li);
    if (flags.precision == 0 && i == 0)
    {
        count += work_width(flags.width, 0, 0);
        return (count);
    }
    flag = 0;
    if (flags.minus == 1)
        count += ft_int_minus(li, flags, flag);
    if (flags.precision < kol && flags.precision >= 0)
              flags.precision = kol;
    if (flags.minus == 0)
        count += ft_int_ne_minus(li, flags, flag);
  
    return (count);
}
