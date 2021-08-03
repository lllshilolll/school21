/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strrchr.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: gbethani <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2021/04/17 20:08:18 by gbethani          #+#    #+#             */
/*   Updated: 2021/04/19 14:26:47 by gbethani         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

char	*ft_strrchr(const char *s, int c)
{
	int	len;

	len = (int)ft_strlen(s);
	if ((char)c =='\0')
		return ((char *)(s + len));
	while (len--)
	{
		if (*(s + len) == (char)c)
			return ((char *)(s + len));
	}
	return ((char *)(NULL));
}
