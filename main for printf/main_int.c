
#include <stdio.h>
#include "../include/ft_printf.h"

int main()
{
    int INT_MAX = 2147483647;//10
    int INT_MIN = -2147483648;//11
    int CHAR_MIN = -128;
    int CHAR_MAX = -127;
    int a = 123;
    int UINT_MAX = 4294967295;//10 -1 2
    
    
     printf("равно: %d\n",printf(" %.d ", 0));
    printf("равно: %d\n",printf(" %.d ", 0));

     printf("равно: %d\n",printf(" --0*%0*.0d*0 0*%0*.10d*0-- ", -2, 0, 21, 1));
    printf("равно: %d\n",printf(" --0*%0*.0d*0 0*%0*.10d*0-- ", -2, 0, 21, 1));

     printf("равно: %d\n",printf("%09.0d", UINT_MAX + 1));
    printf("равно: %d\n",printf("%09.0d", UINT_MAX + 1));

    
    /*
    printf("равно: %d\n",printf("%-0*.4d %-0*.4d", -21, CHAR_MAX, 21, CHAR_MIN));
    printf("равно: %d\n",ft_printf("%-0*.4d %-0*.4d", -21, CHAR_MAX, 21, CHAR_MIN));

    printf("равно: %d\n",printf("%9.2d\n", UINT_MAX));
    printf("равно: %d\n",ft_printf("%9.2d\n", UINT_MAX));

    printf("равно: %d\n",printf("%10.2d\n", UINT_MAX));
    printf("равно: %d\n",ft_printf("%10.2d\n", UINT_MAX));

    printf("равно: %d\n",printf("%11.2d\n", UINT_MAX));
    printf("равно: %d\n",ft_printf("%11.2d\n", UINT_MAX));

    printf("равно: %d\n",printf("%-9.2d\n", UINT_MAX));
    printf("равно: %d\n",ft_printf("%-9.2d\n", UINT_MAX));*/

    /*printf("равно: %d\n",printf("%10.0d\n", UINT_MAX));
    printf("равно: %d\n",ft_printf("%10.0d\n", UINT_MAX));

    printf("равно: %d\n",printf("%10.1d\n", UINT_MAX));
    printf("равно: %d\n",ft_printf("%10.1d\n", UINT_MAX));

    printf("равно: %d\n",printf("%10.10d\n", UINT_MAX));
    printf("равно: %d\n",ft_printf("%10.10d\n", UINT_MAX));

    printf("равно: %d\n",printf("%11.0d\n", UINT_MAX));
    printf("равно: %d\n",ft_printf("%11.0d\n", UINT_MAX));

    printf("равно: %d\n",printf("%11.1d\n", UINT_MAX));
    printf("равно: %d\n",ft_printf("%11.1d\n", UINT_MAX));

    printf("равно: %d\n",printf("%11.10d\n", UINT_MAX));
    printf("равно: %d\n",ft_printf("%11.10d\n", UINT_MAX));

    printf("равно: %d\n",printf("%9.2d\n", UINT_MAX));
    printf("!равно: %d\n",ft_printf("%9.2d\n", UINT_MAX));

    printf("равно: %d\n",printf("%9.10d\n", UINT_MAX));
    printf("равно: %d\n",ft_printf("%9.10d\n", UINT_MAX));

    printf("равно: %d\n",printf("%10.2d\n", UINT_MAX));
    printf("!равно: %d\n",ft_printf("%10.2d\n", UINT_MAX));

    printf("равно: %d\n",printf("%11.2d\n", UINT_MAX));
    printf("!равно: %d\n",ft_printf("%11.2d\n", UINT_MAX));*/
    
    
    
    

    /*printf("равно: %d\n",printf("%020.2d\n", -535));
    printf("равно: %d\n",ft_printf("%020.2d\n", -535));
    printf("равно: %d\n",printf("*%0*.0d* *%021.10d*\n", -21, INT_MAX, -55555555));
    printf("равно: %d\n",ft_printf("*%0*.0d* *%0*.10d*\n", -21, INT_MAX, 21, -55555555));

    printf("равно: %d\n",printf("*%--21.20d* *%-0*.10d*\n",CHAR_MAX, 21, CHAR_MIN));
    printf("равно: %d\n",ft_printf("*%-0*.20d* *%-0*.10d*\n", -21, CHAR_MAX, 21, CHAR_MIN));*/
   /* printf("равно: %d\n",printf("%021.10d", -2147483648));
    printf("равно: %d\n",ft_printf("%021.10d", -2147483648));*/

    /*printf("равно: %d\n",printf("%-2.2d\n", 0));
    printf("равно: %d\n",ft_printf("%-2.2d\n", 0));

    printf("равно: %d\n",printf("%-3.2d\n", 0));
    printf("равно: %d\n",ft_printf("%-3.2d\n", 0));

    printf("равно: %d\n",printf("%-3.2d %10.42d\n", 0, 0));
    printf("равно: %d\n",ft_printf("%-3.2d %10.42d\n", 0, 0));

    printf("равно: %d\n",printf("%-3.2d %10.42d\n", 1, -1));
    printf("равно: %d\n",ft_printf("%-3.2d %10.42d\n", 1, -1));
    
    printf("равно: %d\n",printf("%-3.2d %10.42d\n", 10, -10));
    printf("равно: %d\n",ft_printf("%-3.2d %10.42d\n", 10, -10));

    printf("равно: %d\n",printf("*%-*.*d* *%*.*d*\n", 4, 5, 10, 10, 21, -10));
    printf("равно: %d\n",ft_printf("*%-*.*d* *%*.*d*\n", 4, 5, 10, 10, 21, -10));

    printf("равно: %d\n",printf("*%-*.*d* *%*.*d*\n", 6, 2, 102, 10, 21, -101));
    printf("равно: %d\n",ft_printf("*%-*.*d* *%*.*d*\n", 6, 2, 102, 10, 21, -101));

    printf("равно: %d\n",printf("*%*.*d* *%*.*d*\n", -6, 2, 102, 10, 21, 101));
    printf("равно: %d\n",ft_printf("*%*.*d* *%*.*d*\n", -6, 2, 102, 10, 21, 101));
    printf("равно: %d\n",printf("%-3.2d\n", 10));
    printf("равно: %d\n",ft_printf("%-3.2d\n", 10));*/

/*
    char * arr = ft_itoa(-123);
    printf("%s\n", arr);
    printf("\n\n");
    printf("SHIRINA\n");
    
    printf("with minus\n");
    printf("равно: %d\n", printf("%-d\n", a));
    printf("равно: %d\n", printf("%-20d\n", a));
    printf("равно: %d\n", printf("%-2d\n", a));
    
    printf("Moe\n");
    printf("равно: %d\n", ft_printf("%-d\n", a));
    printf("равно: %d\n", ft_printf("%-20d\n", a));
    printf("равно: %d\n", ft_printf("%-2d\n", a));
    
    printf("without minus\n");
    printf("равно: %d\n", printf("%d\n", a));
    printf("равно: %d\n", printf("%20d\n", a));
    printf("равно: %d\n", printf("%20d\n", -1234));
    
    printf("Moe\n");
    printf("равно: %d\n", ft_printf("%d\n", a));
    printf("равно: %d\n", ft_printf("%20d\n", a));
    printf("равно: %d\n", ft_printf("%20d\n", -1234));
    
    printf("with zero\n");
    //printf("равно: %d\n", printf("%2d\n", a));
    printf("равно: %d\n", printf("%020d\n", a));
    printf("равно: %d\n", printf("%020d\n", -1234));
    
    printf("Moe\n");
    printf("равно: %d\n", ft_printf("%020d\n", a));
    printf("равно: %d\n", ft_printf("%020d\n", -1234));
    
    printf("\n\n");
    printf("TOCHNOST'\n");
    
    printf("with minus\n");
    printf("равно: %d\n", printf("%-.d\n", a));
    printf("равно: %d\n", printf("%-.20d\n", a));
    printf("равно: %d\n", printf("%-.20d\n", -123));
    printf("равно: %d\n", printf("%-.2d\n", a));
    printf("\n\n");

    printf("Moe\n");
    printf("равно: %d\n", ft_printf("%-.d\n", a));
    printf("равно: %d\n", ft_printf("%-.20d\n", a));
    printf("равно: %d\n", ft_printf("%-.20d\n", -123));
    printf("равно: %d\n", ft_printf("%-.2d\n", a));
       printf("\n\n");

    printf("without minus\n");
    printf("равно: %d\n", printf("%.d\n", a));
    printf("равно: %d\n", printf("%.20d\n", a));
    printf("равно: %d\n", printf("%.20d\n", -1234));
    printf("\n\n");

    printf("Moe\n");
    printf("равно: %d\n", ft_printf("%.d\n", a));
    printf("равно: %d\n", ft_printf("%.20d\n", a));
    printf("равно: %d\n", ft_printf("%.20d\n", -1234));
    printf("\n\n");

    printf("with zero\n");
    printf("равно: %d\n", printf("%.2d\n", a));
    printf("равно: %d\n", printf("%0.20d\n", a));
    printf("равно: %d\n", printf("%0.20d\n", -1234));
    printf("\n\n");

    printf("Moe\n");
    printf("равно: %d\n", ft_printf("%.2d\n", a));
    printf("равно: %d\n", ft_printf("%0.20d\n", a));
    printf("равно: %d\n", ft_printf("%0.20d\n", -1234));
    printf("\n\n");

    printf("равно: %d\n", printf("%10.20d\n", -1234));
    printf("равно: %d\n", printf("%20.10d\n", -1234));//error
    printf("равно: %d\n", printf("%20.10d\n", 1234));//error

    printf("\n\n");

    printf("Moe\n");
    printf("равно: %d\n", ft_printf("%10.20d\n", -1234));
    printf("равно: %d\n", ft_printf("%20.10d\n", -1234));
    printf("равно: %d\n", ft_printf("%20.10d\n", 1234));

    printf("равно: %d\n", printf("%20.10d\n", -1234));//error
    printf("равно: %d\n", ft_printf("%20.10d\n", -1234));
*/

    
    
    
    
    
    
    
    
    
    
    
    
    

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
/*    printf("Test flags.precision == 0  && i == 0\n");
    printf("%.0d\n", 0);
    printf("Test len > toch. i < 0 && (flags.precision >= 0\n");
    printf("%.*d\n", 10, -595959);
    printf("Test len < toch. i < 0 && (flags.precision >= 0\n");
    printf("%.*d\n", 3, -595959);*/
   /* printf("Test i < 0 && flags.zero == 1\n");
    printf("%0d\n", -595959);*/
/*    printf("Test i < 0 && flags.zero == 1 flags.precision ne ukazan\n");
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
    printf("%-*d\n", 10, 595959);*/

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
