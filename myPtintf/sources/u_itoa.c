/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   u_itoa.c                                           :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: gbethani <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2021/07/02 17:22:08 by gbethani          #+#    #+#             */
/*   Updated: 2021/07/02 17:22:13 by gbethani         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

//#include "ft_printf.h"
#include "../include/ft_printf.h"
int	ft_size(unsigned int n)
{
	int	size;

	size = 0;
	while (n >= 1)
	{
		size++;
		n /= 10;
	}
	return (size);
}

char	*ft_write_arr(unsigned int nbr, int len)
{
	char	*result;

	if (nbr != 0)
		result = malloc(sizeof(char) * (len + 1));
	else
		return (result = ft_strdup("0"));
	if (!result)
		return (0);
	result[len] = '\0';
	while (--len)
	{
		result[len] = (nbr % 10) + '0';
		nbr /= 10;
	}
	result[0] = (nbr % 10) + '0';
	return (result);
}

char	*ft_u_itoa(unsigned int nbr)
{
	int		len;
	char	*result;

	len = ft_size(nbr);
	result = ft_write_arr(nbr, len);
	if (!result)
		return (0);
	return (result);
}
