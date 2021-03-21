#include "libft.h"

void ft_bzero(void * s , size_t  n){
    size_t i;
  
  i = 0;
  while (i < n)
	{
		((unsigned char *)s)[i] = (unsigned char)0;
	    i++;
	}

}

int main ()
{
    char s1[10] = "1234567890";
    char s2[10] = "1234567890";
   bzero(s1 , 4);
   ft_bzero(s2 , 4);
   printf("%s", s1);
   printf("%s", s2);

   return 0;
}