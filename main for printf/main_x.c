#include <stdio.h>
#include "../include/ft_printf.h"
int main()
{
    //unsigned int a = 1901929;
    printf("%d\n",printf("%0-21x|%021x\n",1021, -1011));
    printf("%d\n", ft_printf("%0-21x|%021x\n",1021, -1011));
    printf("%d\n",printf("%0-21x\n",1021));
    printf("%d\n", ft_printf("%0-21x\n",1021));

    printf("%d\n", printf("%3x\n", 0));
    printf("%d\n", ft_printf("%3x\n", 0));
    
    printf("%d\n", printf("%-3x\n", 0));
    printf("%d\n", ft_printf("%-3x\n", 0));

/*    printf("%d\n", printf("%.0x\n", 0));
    printf("%d\n", printf("%x\n", 0));
    printf("%d\n", printf("%x\n", a));

    printf("%d\n", printf("%.5x\n", a));
    
    printf("\n\n");
    printf("SHIRINA\n");

    printf("%d\n", printf("%x\n", a));
    printf("%d\n", printf("%-20x\n", a));
    printf("%d\n", printf("%-4x\n", a));
    printf("%d\n", printf("%x\n", a));
    printf("%d\n", printf("%20x\n", a));
    printf("%d\n", printf("%4x\n", a));
    printf("%d\n", printf("%020x\n", a));
    printf("Moe\n");
    printf("%d\n", ft_printf("%x\n", a));
    printf("%d\n", ft_printf("%-20x\n", a));
    printf("%d\n", ft_printf("%-4x\n", a));
    printf("%d\n", ft_printf("%x\n", a));
    printf("%d\n", ft_printf("%20x\n", a));
    printf("%d\n", ft_printf("%4x\n", a));
    printf("%d\n", ft_printf("%020x\n", a));
    
    printf("\n\n");
    printf("TOCHNOST'\n");
    printf("%d\n", printf("%-.x\n", a));
    printf("%d\n", printf("%-.20x\n", a));
    printf("%d\n", printf("%-.4x\n", a));
    printf("%d\n", printf("%.x\n", a));
    printf("%d\n", printf("%.20x\n", a));
    printf("%d\n", printf("%.4x\n", a));
    printf("Moe\n");
    printf("%d\n", ft_printf("%-.x\n", a));
    printf("%d\n", ft_printf("%-.20x\n", a));
    printf("%d\n", ft_printf("%-.4x\n", a));
    printf("%d\n", ft_printf("%.x\n", a));
    printf("%d\n", ft_printf("%.20x\n", a));
    printf("%d\n", ft_printf("%.4x\n", a));
    
    printf("\n\n");
    printf("TOCHNOST' AND SHIRINA\n");
    printf("%d\n", printf("%10.x\n", a));
    printf("%d\n", printf("%5.20x\n", a));
    printf("%d\n", printf("%20.4x\n", a));
    printf("%d\n", printf("%-10.x\n", a));
    printf("%d\n", printf("%-5.20x\n", a));
    printf("%d\n", printf("%-20.4x\n", a));
    printf("Moe\n");
    printf("%d\n", ft_printf("%10.x\n", a));
    printf("%d\n", ft_printf("%5.20x\n", a));
    printf("%d\n", ft_printf("%20.4x\n", a));
    printf("%d\n", ft_printf("%-10.x\n", a));
    printf("%d\n", ft_printf("%-5.20x\n", a));
    printf("%d\n", ft_printf("%-20.4x\n", a));*/
}
