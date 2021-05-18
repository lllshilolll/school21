#include "get_next_line.h"

char	*ft_strjoin(char const *s1, char const *s2)
{
	char	*arr;
	size_t	i;
	size_t	j;
	size_t	s1_len;
	size_t	s2_len;

	i = 0;
	if (!s1 && !s2)
		return (NULL);
	s1_len = ft_strlen(s1);
	s2_len = ft_strlen(s2);
	arr = (char *) malloc(sizeof(char) * (s1_len + s2_len + 1));
	if (!arr)
		return (NULL);
	while (i < s1_len)
	{
		arr[i] = s1[i];
		i++;
	}
	j = 0;
	while (i < s1_len + s2_len)
		arr[i++] = s2[j++];
	arr[i] = '\0';
	free((char *)s1);
	return (arr);
}

char	*ft_strdup(const char *save)
{
	int		i;
	char	*arr;

	i = 0;
	if (!save)
		return (NULL);
	while (save[i] && save[i] != '\n')
		i++;
	arr = (char *)malloc(sizeof(char) * (i + 1));
	if (!arr)
		return (NULL);
	i = 0;
	while (save[i] && save[i] != '\n')
	{
		arr[i] = save[i];
		i++;
	}
	arr[i] = '\0';
	return (arr);
}

char	*saves(char *save)
{
	char	*arr;
	int		i;
	int		j;

	i = 0;
	j = 0;
	if (!save)
		return (NULL);
	while (save[i] && save[i] != '\n')
		i++;
	if (!save[i])
	{
		free(save);
		return (NULL);
	}
	arr = (char *) malloc(sizeof(char) * ((ft_strlen(save) - i) + 1));
	if (!arr)
		return (NULL);
	i++;
	while (save[i])
		arr[j++] = save[i++];
	arr[j] = '\0';
	free(save);
	return (arr);
}

int	get_next_line(int fd, char **line)
{
	ssize_t		r;
	char		*buff;
	static char	*save;

	buff = check(fd, line);
	if (buff == NULL)
		return (-1);
	r = 1;
	while (!find_n(save) && r != 0)
	{
		r = read(fd, buff, BUFFER_SIZE);
		if (r == -1)
		{
			free(buff);
			return (-1);
		}
		buff[r] = '\0';
		save = ft_strjoin(save, buff);
	}
	free(buff);
	*line = ft_strdup(save);
	save = saves(save);
	if (r == 0)
		return (0);
	return (1);
}
