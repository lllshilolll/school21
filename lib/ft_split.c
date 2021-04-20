/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_split.c                                         :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: gbethani <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2021/04/20 18:16:38 by gbethani          #+#    #+#             */
/*   Updated: 2021/04/20 20:37:59 by gbethani         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

int nb_str (char const *s, char c)
{
	int count;
	int i;

	i = 0;
	count = 0;
//while
	while (s[i] != '\0')
	{
		if (s[i] == c)
			count++;
		i++;
	}
	if (s[i - 1] != c)
		count++;
	return (count);
}
int	str_len(char const *s, int *str_len, char c)
{
	int len;

	len = 0;
	while (s[*str_len] == c && s[*str_len] != '\0')
		(*str_len)++;
	while (s[*str_len] != c && s[*str_len] != '\0')
	{
		len++;
		(*str_len)++;
	}
	return (len);
}

char **ft_split(char const *s, char c)
{
	char **tab;
	int nb_str;
	int str_len;
	int len;
	int i;

	i = 0;
	str_len = 0;
	if (!s)
		return (NULL);
	nb_str = nb_str(s, c);
	tab = (char **)malloc(sizeof(char *) * nb_str);
	if (!tab)
		return (NULL);
	while (nb_str != 0 && s)
	{
		len = str_len(s, &str_len, c);
		tab[i] = (char *)malloc(sizeof(char) * len);
		while (len--)
			tab[i][len - 1] = s[strlen + len - 1];
				
		nb_str--;
		

}

