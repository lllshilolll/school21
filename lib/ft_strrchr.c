#include "libft.h"

char	*ft_strrchr(const char *s, int c)
{
	size_t len;

	len = ft_strlen(s);
	if ((char)c == '\0')
		return (s + len);
	while (len != 0)
	{
		if (*(s + len) == (char)c)
			return ((s + len));
		len--;
	}
	return (NULL);
}


int main()
{
    unsigned char s1[] = "123456785656";
    unsigned char s2[] = "Hello";
    unsigned char s3[] = "123456785656";
    unsigned char s4[] = "Hello";
    printf("%p \n", ft_strrchr(s1, '5'));
    printf("%p \n", strrchr(s1, '5'));

    return 0;
}
