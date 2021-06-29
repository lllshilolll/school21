#include <stdio.h>
#include "../include/ft_printf.h"

int main()
{
    //UINT_MAX+x+1
    char *arr;
    size_t len;
    unsigned int a = 4294967295;
    unsigned int b = -5;
    unsigned int c = 10;
    arr = ft_u_itoa(c);
    printf("%s\n", arr);
    len = ft_strlen(arr);
    printf("%zu\n", len);

    printf("%u\n", a);
    printf("%u\n", b);
    printf("%u\n", c);
    
    printf("\n\n");
    printf("SHIRINA\n");
    
    printf("without minus\n");
    printf("равно: %d\n", printf("%5u\n", c)); 
    printf("равно: %d\n", printf("%1u\n", c));//ширина равна размеру
    printf("Moe\n");
    printf("равно: %d\n", ft_printf("%5u\n", c)); //5-2 = 3 пробела
    printf("равно: %d\n", ft_printf("%1u\n", c));//ширина равна размеру
    
    printf("with minus\n");
    printf("равно: %d\n", printf("%-5u\n", c));//
    printf("равно: %d\n", printf("%-1u\n", c));
    printf("Moe\n");
    printf("равно: %d\n", ft_printf("%-5u\n", c));//3 пробела после числа
    printf("равно: %d\n", ft_printf("%-1u\n", c));
    
    printf("with zero\n");
    printf("равно: %d\n", printf("%05u\n", c));//
    printf("равно: %d\n", printf("%01u\n", c));//
    printf("Moe\n");
    printf("равно: %d\n", ft_printf("%05u\n", c));//если ноль - заполнить нулями ширина - длина
    printf("равно: %d\n", ft_printf("%01u\n", c));
    
    printf("\n\n");
    printf("TOCHNOST'\n");
    
    printf("without minus\n");
    printf("равно: %d\n", printf("%.5u\n", c)); //если точность > длинны точность - длина = 0-ли
    printf("равно: %d\n", printf("%.1u\n", c));//точность = длина
    printf("Moe\n");
    printf("равно: %d\n", ft_printf("%.5u\n", c)); //если точность > длинны точность - длина = 0-ли
    printf("равно: %d\n", ft_printf("%.1u\n", c));//точность = длина
    
    printf("with minus\n");
    printf("равно: %d\n", printf("%-.5u\n", c));//если точность > длинны точность - длина = 0-ли
    printf("равно: %d\n", printf("%-.1u\n", c));
    printf("Moe\n");
    printf("равно: %d\n", ft_printf("%-.5u\n", c));//если точность > длинны точность - длина = 0-ли
    printf("равно: %d\n", ft_printf("%-.1u\n", c));
    
    printf("with zero\n");
    printf("равно: %d\n", printf("%0.5u\n", c));//если точность > длинны : точность - длина = 0-ли
    printf("равно: %d\n", printf("%0.1u\n", c));
    printf("Moe\n");
    printf("равно: %d\n", ft_printf("%0.5u\n", c));//если точность > длинны : точность - длина = 0-ли
    printf("равно: %d\n", ft_printf("%0.1u\n", c));
    
    printf("TOCHNOST' AND SHIRINA\n");
    
    printf("without minus\n");
    printf("равно: %d\n", printf("%2.5u\n", c));//точности = 5, нули = точность - длинна
    printf("равно: %d\n", printf("%2.1u\n", c));
    printf("равно: %d\n", printf("%10.5u\n", c));//всего 10, ширина - точность = пробелы, точность - длинна = нули
    printf("равно: %d\n", printf("%10.1u\n", c)); // точность - длинна  = пробелы
    
    printf("Moe\n");
    printf("равно: %d\n", ft_printf("%2.5u\n", c));//точности = 5, нули = точность - длинна
    printf("равно: %d\n", ft_printf("%2.1u\n", c));
    printf("равно: %d\n", ft_printf("%10.5u\n", c));//всего 10, ширина - точность = пробелы, точность - длинна = нули
    printf("равно: %d\n", ft_printf("%10.1u\n", c)); // точность - длинна  = пробелы
    
    printf("with minus\n");
    printf("равно: %d\n", printf("%-2.5u\n", c));
    printf("равно: %d\n", printf("%-2.1u\n", c));
    printf("равно: %d\n", printf("%-10.5u\n", c));//всего 10, ширина - точность = пробелы, точность - длинна = нули
    printf("равно: %d\n", printf("%-10.1u\n", c));
    
    printf("Moe\n");
    printf("равно: %d\n", ft_printf("%-2.5u\n", c));
    printf("равно: %d\n", ft_printf("%-2.1u\n", c));
    printf("равно: %d\n", ft_printf("%-10.5u\n", c));//всего 10, ширина - точность = пробелы, точность - длинна = нули
    printf("равно: %d\n", ft_printf("%-10.1u\n", c));
    
    printf("with zero\n");
    printf("равно: %d\n", printf("%02.5u\n", c));
    printf("равно: %d\n", printf("%02.1u\n", c));
    printf("равно: %d\n", printf("%010.5u\n", c));
    printf("равно: %d\n", printf("%010.1u\n", c));
    printf("равно: %d\n", printf("%0u\n", c));

    printf("Moe\n");
    printf("равно: %d\n", ft_printf("%02.5u\n", c));
    printf("равно: %d\n", ft_printf("%02.1u\n", c));
    printf("равно: %d\n", ft_printf("%010.5u\n", c));
    printf("равно: %d\n", ft_printf("%010.1u\n", c));
    printf("равно: %d\n", ft_printf("%0u\n", c));
    //
}
