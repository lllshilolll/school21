#include "libft.h"

char *ft_strncpy(char *dest, const char *src, size_t n)
{
    int i;

    i = 0;
    while (src[i] != '\0' && i < n)
    {
        dest[i] = src[i];
        i++;
    }
    while ( i < n)
    {
        dest[i] = '\0';
        i++;
    }
    return (dest);
}

int main ()
{
    unsigned char s1[] = "1234567890";
    unsigned char s2[] = "Hello";
    unsigned char s3[] = "1234567890";
    unsigned char s4[] = "Hello";
   printf("%s \n", ft_strncpy(s1, s2, 6));
   printf("%s \n", strncpy(s3, s4, 6));

   return 0;
}