/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_split.c                                         :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: gbethani <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2021/04/20 18:16:38 by gbethani          #+#    #+#             */
/*   Updated: 2021/04/21 18:46:03 by gbethani         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

int	char_is_sep(char ch, char sep)
{
	if (ch == sep || ch == '\0')
		return (1);
	return (0);
}

int	n_str(char *s, char c)
{
	int	count;
	int	i;

	i = 0;
	count = 0;
	while (s[i] && char_is_sep(s[i], c) == 1)
		i++;
	while (s[i])
	{
		if (char_is_sep(s[i + 1], c) == 1 && char_is_sep(s[i], c) == 0)
			count++;
		i++;
	}
	return (count);
}

char	*add_word(char *to, char *from, char c)
{
	int	i;

	i = 0;
	while (char_is_sep(from[i], c) == 0 && from[i])
	{
		to[i] = from[i];
		i++;
	}
	to[i] = '\0';
	return (to);
}

char	**malloc_words(char **arr, char *s, char c)
{
	int	i;
	int	j;
	int	count;

	i = 0;
	count = 0;
	while (s[i] != '\0')
	{
		if (char_is_sep(s[i], c) == 1)
			i++;
		else
		{
			j = 0;
			while (char_is_sep(s[i + j], c) == 0 && s[i + j])
				j++;
			arr[count] = (char *)malloc(sizeof(char) * (j + 1));
			if (!arr[count])
				return (NULL);
			arr[count] = add_word(arr[count], s + i, c);
			i = i + j;
			count++;
		}
	}
	return (arr);
}

char	**ft_split(char const *s, char c)
{
	char	**arr;
	int		nb_str;

	if (!s)
		return (NULL);
	nb_str = n_str((char *)s, c);
	arr = (char **)malloc(sizeof(char *) * (nb_str + 1));
	if (!arr)
		return (NULL);
	arr[nb_str] = NULL;
	arr = malloc_words(arr, (char *)s, c);
	return (arr);
}
