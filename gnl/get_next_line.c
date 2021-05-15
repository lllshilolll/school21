#include "get_next_line.h"

char	*ft_strchr(const char *s, int c)//если символ найден вывести остаток строки включая этот символ
{
	while (*s != '\0' && *s != c)
	{
		s++;
	}
	if (*s == (char)c)
		return ((char *)s);
	return ((char *) NULL);
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

int			ft_strclean(char *str)
{
	if (*str)
	{
		ft_memset(str, 0, ft_strlen(str));
		free(str);
		str = NULL;
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

int get_next_line(int fd, char **line)
{
	char *buff;
	char *save;
	char *tmp;
	int reader;
	
	reader = 1;
	if (fd < 0 || !line || BUFFER_SIZE <= 0)
		return (-1);
	save = NULL ? (save = ft_strmalloc(0)) : NULL;
	buff = malloc(sizeof(char) * (BUFFER_SIZE + 1));
	if (!buff)
		return (-1);
	while (!ft_strchr(save, '\n') && (reader = read(fd, buff, BUFFER_SIZE)) > 0)
	{
		buff[reader] = '\0';
		tmp = ft_strjoin(save, buff);//склеиваем 
		ft_strclean(save);//чистим строку
		save = tmp;//записываем склеиную строку
	}
	if (reader == 0)
		*line = ft_strdup(save);//переписываем строку в line
	else if (reader > 0)
		//взять подстроку save = line это строка до \n
		*line = ft_substr(save, 0, (ft_strlen(ft_strchr(save, '\n')) - ft_strlen(save)));//остаток строки - строка = строка до первого \n
	else
		return (-1);
	tmp = ft_strdup(save + (ft_strlen(*line) + ((reader > 0) ? +1 : +0)));
	save = tmp;
	return (reader == 0 ? 0 * ft_strclean(save) : 1);
}

