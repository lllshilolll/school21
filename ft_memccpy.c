#include "libft.h"

void *ft_memccpy(void *dest, const void *src, int c, size_t n)
{
    size_t i;

    i = 0;
    if (!dest || !src)
        return (NULL);
    while (i < n)
    {
        *(unsigned char *)(dest + i) = *(unsigned char *)(src + i);
        if (*(unsigned char *)(src + i) == (unsigned char)c)
            return (dest + i + 1);
        i++;
    }
    return (NULL);
}

int main ()
{
    unsigned char s1[10] = "1234567890";
    unsigned char s2[10] = "Hello";
    unsigned char s3[10] = "1234567890";
    unsigned char s4[10] = "Hello";
   printf("%s \n", ft_memccpy(s1, s2, 'e', 3));
   printf("%s \n", memccpy(s3, s4, 'e', 3));

   return 0;
}