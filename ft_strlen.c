#include "libft.h"

size_t ft_strlen(const char *s)
{
    size_t i;
    
    i = 0;
    while (s[i] != '\0')
    {
        i++;
    }
    return (i);
}

int main ()
{
    unsigned char s1[10] = "123456785656";
    //unsigned char s2[10] = "Hello";
    unsigned char s2[10] = "123456785";
    //unsigned char s4[10] = "Hello";
   printf("%d \n", ft_strlen(s1));
   printf("%d \n", ft_strlen(s2));
   printf("%d \n", strlen(s1));
   printf("%d \n", strlen(s2));

   return 0;
}