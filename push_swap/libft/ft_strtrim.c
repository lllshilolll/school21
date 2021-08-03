/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strtrim.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: gbethani <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2021/04/19 17:32:43 by gbethani          #+#    #+#             */
/*   Updated: 2021/04/25 18:59:10 by gbethani         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

char	*ft_strtrim(char const *s1, char const *set)
{
	char	*arr;
	int		i;
	size_t	len;

	if (!s1 || !set)
		return (NULL);
	while (*s1 && ft_strchr(set, *s1))
		   s1++;
	len = ft_strlen(s1);
	while (len && ft_strchr(set, s1[len]))
		len--;
	arr = (char *)malloc(sizeof(char) * (len + 2));
	if (!arr)
		return (NULL);
	i = 0;
	len++;
	while (len > 0)
	{
		len--;
		arr[i] = s1[i];
		i++;
	}
	arr[i] = '\0';
	return (arr);
}
