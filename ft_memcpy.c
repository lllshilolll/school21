#include "libft.h"

void *ft_memcpy(void *dest, const void *src, size_t n)
{
    size_t i;
    if (!dest)
        return (NULL);
    i = 0;
    while (i < n)
    {
        *(char *)(dest + i) = *(char *)(src + i);
        i++;
    }
    return (dest);
}

int main ()
{
    char s1[10] = "1234567890";
    char s2[10] = "Hello";
    char s3[10] = "1234567890";
    char s4[10] = "Hello";
   printf("%s \n", ft_memcpy(s1, s2, 3));
   printf("%s \n", memcpy(s3, s4, 3));

   return 0;
}