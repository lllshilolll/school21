#include "libft.h"

char *ft_strdup(const char *s)
{
    int i;
    char *arr;
    
    i = 0;
    if (!s)
        return (NULL);
    arr = (char *)malloc(sizeof(char) * ft_strlen(s) + 1);
    if (!arr)
        return (NULL);
    while (s[i]  != '\0')
    {
        arr[i] = s[i];
        i++;
    }
    return (arr);
}

int main ()
{
    unsigned char s1[10] = "123456785656";
    //unsigned char s2[10] = "Hello";
    unsigned char s2[10] = "123456785";
    //unsigned char s4[10] = "Hello";
   printf("%p \n", ft_strdup(s1));
   printf("%p \n", ft_strdup(s2));
   printf("%p \n", strdup(s1));
   printf("%p \n", strdup(s2));

   return 0;
}