/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strchr.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: gbethani <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2021/04/17 19:38:18 by gbethani          #+#    #+#             */
/*   Updated: 2021/04/19 14:25:59 by gbethani         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

//#include "libft.h"
#include <stdio.h>

char	*ft_strchr(const char *s, int c)
{
	while (*s != '\0' && *s != c)
	{
		s++;
	}
	if (*s == (char)c)
		return ((char *)s);
	return ((char *) NULL);
}

int main()
{
	const char s[20] = "hello";
	printf("%s",ft_strchr(s, 'l'));
}
