/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_base.c                                          :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: gbethani <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2021/07/02 17:21:14 by gbethani          #+#    #+#             */
/*   Updated: 2021/07/02 17:21:17 by gbethani         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

//#include "ft_printf.h"
#include "../include/ft_printf.h"
char	*ft_str_tolower(char *str)
{
	int	i;

	i = 0;
	while (str[i])
	{
		str[i] = ft_tolower(str[i]);
		i++;
	}
	return (str);
}

char	*filling_base(unsigned long long num_save, char *result, int count)
{
	count -= 1;
	while (num_save != 0)
	{
		if ((num_save % 16) < 10)
			result[count] = (num_save % 16) + 48;
		else
			result[count] = (num_save % 16) + 55;
		num_save /= 16;
		count--;
	}
	return (result);
}

char	*ft_base(unsigned long long num)
{
	char				*result;
	unsigned long long	num_save;
	int					count;

	result = 0;
	count = 0;
	num_save = num;
	if (num == 0)
		return (ft_strdup("0"));
	while (num != 0)
	{
		num /= 16;
		count++;
	}
	result = malloc(sizeof(char) * (count + 1));
	if (!(result))
		return (0);
	result[count] = '\0';
	result = filling_base(num_save, result, count);
	return (result);
}
