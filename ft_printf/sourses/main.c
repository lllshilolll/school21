//
//  main.c
//  
//
//  Created by Gloin Bethanie on 6/17/21.
//
#include <stdio.h>
#include "./include/ft_printf.h"
#include "main.h"

int main()
{
    printf("Test 1\n");
    printf(" --0* %0*.0d *0 0* %0*.10d *0-- ", -21, 2147483647, 21, -2147483648);
    printf("\n");
    ft_printf(" --0* %0*.0d *0 0* %0*.10d *0-- ", -21, 2147483647, 21, -2147483648);
    printf("\n\n");
  
    printf("Test 1\n");
    printf("%0*d", -7, -54);
    printf("\n");
    ft_printf("%0*d", -7, -54);
    printf("\n\n");
/*
    printf("Test 2\n");
    printf("%0*d", -7, -54);
    printf("\n");
    ft_printf("%0*d", -7, -54);
    printf("\n\n");*/
//    printf("%lu, %lu\n", (sizeof(int)), (sizeof(long int)));
/*   int min = -2147483648;
    char *arr = ft_itoa(min);
    printf("%s\n", arr);*/
    printf("Test flags.precision == 0  && i == 0\n");
    printf("%.0d\n", 0);
    printf("Test len > toch. i < 0 && (flags.precision >= 0\n");
    printf("%.*d\n", 10, -595959);
    printf("Test len < toch. i < 0 && (flags.precision >= 0\n");
    printf("%.*d\n", 3, -595959);
   /* printf("Test i < 0 && flags.zero == 1\n");
    printf("%0d\n", -595959);*/
    printf("Test i < 0 && flags.zero == 1 flags.precision ne ukazan\n");
    printf("%0d\n", -595959);
    printf("Test  len < toch. i < 0 && && flags.precision >= 0 && flags.zero == 1\n");
    printf("%0.3d\n", -595959);
    printf("Test  len > toch. i < 0 && && flags.precision >= 0 && flags.zero == 1\n");
    printf("%0.10d\n", -595959);
    
    printf("Test flags.minus == 1\n");
    printf("%-.10d\n", 595959);
    printf("%-d\n", 595959);
    
    printf("Test flags.minus == 1 zero = 1\n");
    printf("%-.10d\n", 595959);
    printf("%-d\n", 595959);
    
    printf("Test flags.precision >= 0\n");
    printf("%.10d\n", 595959);
    printf("Test flags.precision >= 0 flags.width > 0 and > toch. i < 0\n");
    printf("%10.*d\n", 5, -595959);
    printf("Test flags.precision >= 0 flags.width > 0 and < toch. i < 0\n");
    printf("%5.*d\n", 10, -595959);
    printf("Test flags.width > 0 \n");
    printf("%*d\n", 10, 595959);
    printf("Test zero = 1 flags.width > 0 \n");
    printf("%0*d\n", 10, 595959);
    printf("Test minus flags.width > 0 \n");
    printf("%-*d\n", 10, 595959);

    /*
    printf("Test shirina\n");
    printf("%0*d\n", 4, 595959);
    printf("%0*d\n", 10, 595959);
    printf("%0*d\n", -10, 595959);
    printf("%*d\n", 10, 595959);
    printf("%*d\n", -10, 595959);
    printf("\n\n");
    
    printf("Test tochnost'\n");
    printf("%.*d\n", 4, 595959);
    printf("%.*d\n", -10, 595959);
    printf("%.*d\n", 10, 595959);
    printf("\n\n");*/
    /*
    printf("Test shirins i tochnost'\n");
    printf("%*.*d\n", 11, 4, 595959);
    printf("%*.*d\n", 4, 4, 595959);
    printf("%*.*d\n", 3, 10, 595959);
    printf("%*.*d\n", -10, 5, 595959);
    printf("%*.*d\n", 10, -10, 595959);
*/


/*    printf("Test 1\n");
    printf("%c", '0');
    printf("\n");
    ft_printf("%c", '0');
    printf("\n\n");

    printf("Test 2\n");
    printf(" %c ", '0');
    printf("\n");
    ft_printf(" %c ", '0');
    printf("\n\n");

    printf("Test 3\n");
    printf("%*c", 10, '0');
    printf("\n");
    ft_printf("%*c", 10, '0');
    printf("\n\n");

    printf("Test 4\n");
    printf("%c ", 55);
    printf("\n");
    ft_printf("%c ", 55);
    printf("\n\n");
*/
    
}
