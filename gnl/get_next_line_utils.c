#include "get_next_line.h"

size_t	ft_strlen(const char *s)
{
	size_t	i;

	i = 0;
	while (s[i] != '\0')
	{
		i++;
	}
	return (i);
}

void	*ft_memset (void *destination, int c, size_t n)//заполняет строку символом 
{
	size_t	i;

	i = 0;
	while (i < n)
	{
		*(unsigned char *)(destination + i) = (unsigned char)c;
		i++;
	}
	return (destination);
}

char	*ft_substr(char const *s, unsigned int start, size_t len)
{
	char	*arr;
	size_t	i;

	if (!s)
		return (NULL);
	if (len == 0)
	{
		arr = (char *) malloc(1 * sizeof(char));
		arr[0] = '\0';
		return (arr);
	}
	arr = (char *) malloc((1 + len) * sizeof(char));
	if (!arr)
		return (NULL);
	i = 0;
	while (i < len && s[start] != '\0' && start < ft_strlen(s))
	{
		arr[i] = s[start];
		i++;
		start++;
	}
	arr[i] = '\0';
	return (arr);
}


char *ft_strmalloc(int size) //выделяем память, выводим пустой массив
{
	void *arr;
	
	size = size + 1;
	arr = malloc(size * sizeof(char));
	if (!arr)
		return (NULL);
	ft_memset(arr, 0, size);
	return (arr);
}
	
