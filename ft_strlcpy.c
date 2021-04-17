#include <stdio.h>
#include <string.h>

size_t	ft_strlcpy(char *dest, char *src, size_t size)
{
    size_t i;
    
    i = 0;
    if (!dest || !src)
        return (0);
    while (i < size)
    {
        *(dest + i) = *(src + i);
        i++;
    }
    *(dest + i) = '\0';
    while (*(src + i))
    {
        i++;
    }
    return (i);
}


int main()
{
    
    char s1[15]= "123456";
    char s2[15] = "";
    printf("ft %lu \n", ft_strlcpy(s2, s1, 4));
    printf("m %lu \n", strlcpy(s2, s1, 4));
    return 0;
}