#include <stdio.h>
#include "../include/ft_printf.h"
int main()
{
    int a;
    char b;
    
    printf("%d\n", printf("%.0p\n", 0));
    printf("%d\n", printf("%p\n", 0));
    printf("%d\n", printf("%p\n", &a));

    printf("%d\n", printf("%.5p\n", &a));
    
    printf("\n\n");
    printf("SHIRINA\n");

    printf("%d\n", printf("%-p\n", &a));
    printf("%d\n", printf("%-20p\n", &a));
    printf("%d\n", printf("%-4p\n", &a));
    printf("%d\n", printf("%p\n", &a));
    printf("%d\n", printf("%20p\n", &a));
    printf("%d\n", printf("%4p\n", &a));
    printf("%d\n", printf("%020p\n", &a));
    printf("Moe\n");
    printf("%d\n", ft_printf("%-p\n", &a));
    printf("%d\n", ft_printf("%-20p\n", &a));
    printf("%d\n", ft_printf("%-4p\n", &a));
    printf("%d\n", ft_printf("%p\n", &a));
    printf("%d\n", ft_printf("%20p\n", &a));
    printf("%d\n", ft_printf("%4p\n", &a));
    printf("%d\n", ft_printf("%020p\n", &a));
    
    printf("\n\n");
    printf("TOCHNOST'\n");
    printf("%d\n", printf("%-.p\n", &a));
    printf("%d\n", printf("%-.20p\n", &a));
    printf("%d\n", printf("%-.4p\n", &a));
    printf("%d\n", printf("%.p\n", &a));
    printf("%d\n", printf("%.20p\n", &a));
    printf("%d\n", printf("%.4p\n", &a));
    printf("Moe\n");
    printf("%d\n", ft_printf("%-.p\n", &a));
    printf("%d\n", ft_printf("%-.20p\n", &a));
    printf("%d\n", ft_printf("%-.4p\n", &a));
    printf("%d\n", ft_printf("%.p\n", &a));
    printf("%d\n", ft_printf("%.20p\n", &a));
    printf("%d\n", ft_printf("%.4p\n", &a));
    
    printf("\n\n");
    printf("TOCHNOST' AND SHIRINA\n");
    printf("%d\n", printf("%10.p\n", &a));
    printf("%d\n", printf("%5.20p\n", &a));
    printf("%d\n", printf("%20.4p\n", &a));
    printf("%d\n", printf("%-10.p\n", &a));
    printf("%d\n", printf("%-5.20p\n", &a));
    printf("%d\n", printf("%-20.4p\n", &a));
    printf("Moe\n");
    printf("%d\n", ft_printf("%10.p\n", &a));
    printf("%d\n", ft_printf("%5.20p\n", &a));
    printf("%d\n", ft_printf("%20.4p\n", &a));
    printf("%d\n", ft_printf("%-10.p\n", &a));
    printf("%d\n", ft_printf("%-5.20p\n", &a));
    printf("%d\n", ft_printf("%-20.4p\n", &a));

}
