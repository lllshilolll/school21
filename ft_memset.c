void *ft_memset (void *destination, int c, size_t n)
#include "libft.h"

{
  size_t i;
  
  i = 0;
  while (i < n)
	{
		((unsigned char *)destination)[i] = (unsigned char)c;
	    i++;
	}
return (destination);
}

int main ()
{
    unsigned char src1[15] = "";
    unsigned char src2[15] = "";
    ft_memset (src1, '1', 15);
    memset (src2, '1', 15);
    printf ("src1: %s\n",src1);
    printf ("src2: %s\n",src2);

   return 0;
}