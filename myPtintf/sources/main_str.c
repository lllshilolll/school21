#include <stdio.h>
#include "../include/ft_printf.h"
int main()
{
    printf("%%%-10s\n", "hell", 18);
    ft_printf("%%%-10s\n", "hell", 18);
    printf("%%-5s\n %-04.10X\n", "helloworld", 85465);

    ft_printf("%%-5s\n %-04.10X\n", "helloworld", 85465);
    /*printf("%d\n", printf("%-s\n", "hello"));
    printf("%d\n", printf("%s\n", "hello"));
  	printf("%d\n", printf("%10s\n", "hell"));
    printf("%d\n", printf("%5s\n", "helloworld"));
    
    printf("\n\n");
    printf("TOCHNOST'\n");

    printf("%d\n", printf("%-.10s\n", "hell"));
    printf("%d\n", printf("%-.5s\n", "helloworld"));
    printf("%d\n", printf("%-.s\n", "hello"));
    printf("%d\n", printf("%.s\n", "hello"));
    printf("%d\n", printf("%.10s\n", "hell"));
    printf("%d\n", printf("%.5s\n", "helloworld"));
    
    printf("\n\n");
    printf("TOCHNOST' AND SHIRINA\n");

    printf("%d\n", printf("%10.20s\n", "hell"));
    printf("%d\n", printf("%3.10s\n", "hell"));
    printf("%d\n", printf("%10.3s\n", "hell"));
    printf("%d\n", printf("%3.3s\n", "hell"));
    
    printf("\n\n");
    printf("TOCHNOST' AND SHIRINA S MINUSOM\n");
    printf("%d\n", printf("%-10.20s\n", "hell"));
    printf("%d\n", printf("%-3.10s\n", "hell"));
    printf("%d\n", printf("%-10.3s\n", "hell"));
    printf("%d\n", printf("%-3.3s\n", "hell"));*/
/*Если ширина больше длинны строки мы заполняем ее пробелами
 Если точность меньше длинны слова мы его обрезаем */

}

