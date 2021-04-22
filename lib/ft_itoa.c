/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_itoa.c                                          :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: gbethani <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2021/04/21 18:47:12 by gbethani          #+#    #+#             */
/*   Updated: 2021/04/22 16:22:34 by gbethani         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

int	ft_is_minus(int n)
{
	if (n < 0)
		return (1);
	return (0);
}

int	ft_min_int(int n)
{
	if (n == -2147483648)
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

char	*write_nb(char *arr, int numb, int n)
{
	int	i;
	int	tmp;

	i = -1;
	if (ft_is_minus(n) == 1)
	{
		arr[++i] = '-';
		numb--;
		if (ft_min_int(n) == 1)
		{
			arr[++i] = '2';
			numb--;
			n = (n + 2000000000);
		}
		n = n * (-1);
	}
	while (numb > 0)
	{
		tmp = n / ft_pow_10(numb - 1);
		arr[++i] = tmp + '0';
		n = n - tmp * (ft_pow_10(numb - 1));
		numb--;
	}
	arr[++i] = '\0';
	return (arr);
}

char	*ft_itoa(int n)
{
	char	*arr;
	int		numb;
	int		count;

	count = n;
	numb = 1;
	if (ft_is_minus(n) == 1 && ft_min_int(n) == 0)
	{
		numb++;
		n = n * (-1);
	}
	while (n > 9)
	{
		n = n / 10;
		numb++;
	}
	if (ft_min_int(n) == 1)
		numb = 11;
	arr = (char *)malloc(sizeof(char) * (numb + 1));
	if (!arr)
		return (NULL);
	arr = write_nb(arr, numb, count);
	return (arr);
}
