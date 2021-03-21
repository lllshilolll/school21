#include "libft.h"

void *ft_memchr(const void *s, int c, size_t n)
{
    size_t i;
    
    if (!s)
        return (NULL);
    i = 0;
    while (i < n)
    {
        if (*(unsigned char*)(s+i) == (unsigned char)c)
            return (s + i);
        i++;
    }
    return (NULL);
}

int main ()
{
    unsigned char s1[10] = "1234567890";
    //unsigned char s2[10] = "Hello";
    unsigned char s3[10] = "1234567890";
    //unsigned char s4[10] = "Hello";
   printf("%p \n", ft_memchr(s1, '4', 5));
   printf("%p \n", memchr(s1, '4', 5));

   return 0;
}