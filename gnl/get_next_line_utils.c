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

void	*ft_memset (void *destination, int c, size_t n)
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

	if (!s || len < 0)
		return (NULL);
	arr = (char *) malloc((1 + len) * sizeof(char));
	if (!arr)
		return (NULL);
	i = 0;
	//printf("substr\n");
	while (start < ft_strlen(s) && i < len)
	{
		arr[i] = s[start];
		i++;
		start++;
	}
	arr[i] = '\0';
	return (arr);
}


char *ft_strmalloc(int size) 
{
	void *arr;
	
	size = sizeof(char) * (size + 1);
	arr = malloc(size);
	if (!arr)
		return (NULL);
	ft_memset(arr, 0, size);
	return (arr);
}	
