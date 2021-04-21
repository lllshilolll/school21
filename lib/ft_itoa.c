/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_itoa.c                                          :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: gbethani <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2021/04/21 18:47:12 by gbethani          #+#    #+#             */
/*   Updated: 2021/04/21 20:09:11 by gbethani         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

int	ft_is_minus(int n)
{
	if (n < 0)
		return (1);
	return 0;
}

int	count_numb(int n)
{
	int numb;

	numb = 1;
	if (ft_is_minus(n) == 1)
	{
		numb++;
		n = n * (-1);
	}
	while (n > 9)
	{
		n = n / 10;
		numb++;
	}
	return (numb);
}
int ft_pow_10(numb)
{
	int p;
	
	p = 1;
	while (numb--)
		p = 10 * p;
	return (p);
}

char *write_nb(char *arr, int numb, int n)
{
	int i;
	int tmp;

	i = 0;
	if (ft_is_minus(n) == 1)
	{
		arr[i] = '-';
		i++;
		numb--;
		n = n * (-1);
	}
	while (numb > 0)
	{
		tmp = n / ft_pow_10(numb - 1);
		arr[i] = tmp + '0';
		n = n - tmp * (ft_pow_10(numb - 1));
		numb--;
		i++;
	}
	arr[i] = '\0';
	return (arr);
}
char *ft_itoa(int n)
{
	char *arr;
	int numb;

	numb = count_numb(n);
	arr = (char *)malloc(sizeof(char) * (numb + 1));
	if (!arr)
		return (NULL);
	arr = write_nb(arr, numb, n);
	return (arr);
}
