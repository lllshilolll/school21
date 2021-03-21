#include "libft.h"

int ft_memcmp(const void *s1, const void *s2, size_t n)
{
   size_t i;
   
   i = 0;
   while (i < n)
	{
		if (*(unsigned char*)(s1 + i) != *(unsigned char*)(s2 + i))
			return (*(unsigned char*)(s1 + i) - *(unsigned char*)(s2 + i));
		i++;
	}
	return (0);
   /*while (!s1 && !s2 && (*(unsigned char*)(s1 + i) == *(unsigned char*)(s2 + i)) && i < n)
   {
		i++;
   }
   return (*(unsigned char*)(s1 + i) - *(unsigned char*)(s2 + i));
*/}

int main ()
{
    unsigned char s1[10] = "123456785656";
    //unsigned char s2[10] = "Hello";
    unsigned char s2[10] = "123456785";
    //unsigned char s4[10] = "Hello";
   printf("%d \n", ft_memcmp(s1, s2, 10));
   printf("%d \n", memcmp(s1, s2, 10));

   return 0;
}