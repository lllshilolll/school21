/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_itoa.c                                          :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: gbethani <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2021/04/21 18:47:12 by gbethani          #+#    #+#             */
/*   Updated: 2021/07/02 17:15:59 by gbethani         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

//#include "ft_printf.h"
#include "../include/ft_printf.h"
int	ft_is_minus(int n)
{
	if (n < 0)
		return (1);
	return (0);
}

int	ft_pow_10(int numb)
{
	int	p;

	p = 1;
	while (numb--)
		p = 10 * p;
	return (p);
}

char	*write_nb(char *arr, int numb, long int n)
{
	int			i;
	int			tmp;
	long int	count;

	count = (long int) n;
	i = 0;
	if (ft_is_minus(n) == 1)
		count = count * (-1);
	while (numb > 0)
	{
		tmp = count / ft_pow_10(numb - 1);
		arr[i] = tmp + '0';
		count = count - tmp * (ft_pow_10(numb - 1));
		numb--;
		i++;
	}
	arr[i] = '\0';
	return (arr);
}

char	*ft_itoa(long int n)
{
	char			*arr;
	int				numb;
	long int		count;

	count = (long int)n;
	numb = 1;
	if (ft_is_minus(n) == 1)
		count = count * (-1);
	while (count > 9)
	{
		count = count / 10;
		numb++;
	}
	arr = (char *)malloc(sizeof(char) * (numb + 1));
	if (!arr)
		return (NULL);
	arr = write_nb(arr, numb, n);
	return (arr);
}
