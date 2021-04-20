/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strtrim.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: gbethani <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2021/04/19 17:32:43 by gbethani          #+#    #+#             */
/*   Updated: 2021/04/20 18:15:59 by gbethani         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

char	*ft_strtrim(char const *s1, char const *set)
{
	char	*arr;
	int		i;
	size_t	len;

	i = 0;
	if (!s1 || !set)
		return (NULL);
	while (*(s1 + i) && ft_strchr(set, *(s1 + i)))
		   i++;
	len = ft_strlen(s1);
	while (len && ft_strchr(set, *(s1 + len - 1)))
		len--;
	if (i + (ft_strlen(s1) - len) >= ft_strlen(s1))
		arr = (char *)malloc(sizeof(char) * 1);
	else
		arr = (char *)malloc(sizeof(char) * ((int)len + 1 - i));
	if (!arr)
		return (NULL);
	if (i + (ft_strlen(s1) - len) < ft_strlen(s1))
		arr = ft_substr(s1, i, len - i);
	arr[ft_strlen(arr)] = '\0';
	return (arr);
}
