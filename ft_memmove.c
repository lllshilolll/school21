#include "libft.h"

void *ft_memmove(void *dest, const void *src, size_t n)
{
  
    int i;

    if (!dest || !src)
        return (NULL);
    if (dest > src)
    {
        i = (int)n - 1;
        while (i >= 0)
        {
            *(unsigned char*)(dest + i) = *(unsigned char*)(src + i);
			i--;
        }
    }
    else
    {
        i = 0;
        while (i < (int)n)
        {
            *(unsigned char *)(dest + i) = *(unsigned char *)(src + i);
           i++;
        }
    }
    return (dest);
}

int main ()
{
    unsigned char s1[10] = "1234567890";
    unsigned char s2[10] = "Hello";
    unsigned char s3[10] = "1234567890";
    unsigned char s4[10] = "Hello";
   printf("%s \n", ft_memmove(s1, s2, 10));
   printf("%s \n", memmove(s3, s4, 10));

   return 0;
}