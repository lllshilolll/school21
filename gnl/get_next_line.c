#include "get_next_line.h"
#include <stdio.h>

char	*ft_strchr(const char *s, int c)
{
	int i;

	i = 0;
	while (s[i] != (char)c)
	{
		if (!s[i])
		{
			//printf("ft_strchr -> save[%d] = NULL\n", i);
			return (NULL);
		}
		i++;
	}
	//printf("ft_strchr -> save[%d] = %s\n", i, &s[i]);
	return ((char *)&s[i]);
}

char	*ft_strjoin(char const *s1, char const *s2)
{
	char	*arr;
	size_t	i;
	size_t	j;

	i = 0;
	if (!s1 || !s2)
		return (NULL);
	arr = (char *) malloc(sizeof(char) * (ft_strlen(s1) + ft_strlen(s2) + 1));
	if (!arr)
		return (NULL);
	while (i < ft_strlen(s1))
	{
		arr[i] = s1[i];
		i++;
	}
	j = 0;
	while (i < ft_strlen(s1) + ft_strlen(s2))
	{
		arr[i] = s2[j];
		j++;
		i++;
	}
	arr[i] = '\0';
	return (arr);
}

int			ft_strclean(void **str)
{
	if (*str)
	{
		free(*str);
		*str = NULL;
		return (1);
	}
	return (0);
}

char	*ft_strdup(const char *s)
{
	int		i;
	char	*arr;

	i = 0;
	arr = (char *)malloc(sizeof(char) * (ft_strlen(s) + 1));
	if (!arr)
		return (NULL);
	while (s[i] != '\0')
	{
		arr[i] = s[i];
		i++;
	}
	arr[i] = '\0';
	return (arr);
}

int	get_next_line(int fd, char **line)
{
	ssize_t		r;
	char		*buff;
	static char	*save;
	char		*tmp;
	int			count;
	
	count = 0;	
	r = 1;	
	if (fd < 0 || !line || BUFFER_SIZE <= 0)
	{
		ft_strclean((void**)&save);
		return (-1);
	}
	//printf("chek1\n");
	if (save == NULL)
		save = ft_strmalloc(0);
	//printf ("%s - save\n", save); 
	buff = malloc(sizeof(char) * (BUFFER_SIZE + 1));
	if (!buff)
	{
		//ft_strclean((void**)&buff);
		//ft_strclean((void**)&save);
		return (-1);
	}
	while (!ft_strchr(save, '\n') && (r = read(fd, buff, BUFFER_SIZE)) > 0)
	{
		//printf("\\\\\n");
		buff[r] = '\0';
		//printf("buff[%zd] = %c\n", r, buff[r]); 
		tmp = ft_strjoin(save, buff);
		//printf("tmp = %s\n", tmp);
		ft_strclean((void **)&save);
		save = tmp;
		//printf("\n");
		
	}
//	printf("after\n");(
	if (r == 0)
		*line = ft_strdup(save);
	else if (r > 0)
	{
		count = 1;
		//printf("line start - %s\n", *line);
		*line = ft_substr(save, 0, (ft_strchr(save, '\n') - save));
		//printf("line finish - %s\n", *line);
	}
	else
	{
		//ft_strclean((void **)&tmp);
		ft_strclean((void **)&buff);
		//ft_strclean((void **)&save);
		return (-1);
	}
	tmp = ft_strdup(save + ft_strlen(*line) + count);
	//printf("tmp = %s\n", tmp);
	ft_strclean((void **)&save);
	save = ft_strdup(tmp);
	ft_strclean((void **)&tmp);
	ft_strclean((void **)&buff);

	return (r == 0 ? 0 * ft_strclean((void **)&save) : 1);
}
