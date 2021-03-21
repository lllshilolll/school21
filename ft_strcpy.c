#include "libft.h"

char *ft_strcpy(char *dest, const char *src)
{
    int i;

    i = 0;
    while (src[i] != '\0')
    {
        dest[i] = src[i];
        i++;
    }
    dest[i] = '\0';
    return (dest);
}

int main ()
{
    unsigned char s1[] = "1234567890";
    unsigned char s2[] = "Hello";
    unsigned char s3[] = "1234567890";
    unsigned char s4[] = "Hello";
   printf("%s \n", ft_strcpy(s1, s2));
   printf("%s \n", strcpy(s3, s4));

   return 0;