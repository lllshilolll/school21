/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   work_with_u.c                                      :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: gbethani <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2021/07/02 19:35:17 by gbethani          #+#    #+#             */
/*   Updated: 2021/07/02 19:35:21 by gbethani         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

//#include "ft_printf.h"
#include "../include/ft_printf.h"

int	ft_u_minus(t_flags flags, char *arr, int len)
{
	int	count;

	count = 0;
	if (flags.minus == 1)
	{
		if (flags.precision > len)
			count += work_width(flags.precision, len, 1);
		count += ft_putstr(arr, len);
	}
	return (count);
}

int	ft_width_len(t_flags flags, int len)
{
	int	count;

	count = 0;
	if (flags.zero == 1 && flags.precision == -1)
		count += work_width(flags.width, len, 1);
	else
	{
		if (flags.precision > len)
			count += work_width(flags.width, flags.precision, 0);
		else
			count += work_width(flags.width, len, 0);
	}
	return (count);
}

int	ft_u_ne_minus(t_flags flags, int len, char *arr)
{
	int	count;

	count = 0;
	if (flags.minus == 0)
	{
		if (flags.precision > len && flags.zero == 0)
			count += work_width(flags.precision, len, 1);
		if (flags.precision > len && flags.zero == 1)
			count += work_width(flags.precision, len, 1);
		count += ft_putstr(arr, len);
	}
	return (count);
}

int	work_with_u(unsigned int unsi, t_flags flags)
{
	int		count;
	char	*arr;
	size_t	l;
	int		len;

	count = 0;
	if (flags.precision == 0 && unsi == 0)
	{
		count += work_width(flags.width, 0, 0);
		return (count);
	}
	arr = ft_u_itoa(unsi);
	l = ft_strlen(arr);
	len = (int)l;
	count += ft_u_minus(flags, arr, len);
	if (flags.width > len)
		count += ft_width_len(flags, len);
	count += ft_u_ne_minus(flags, len, arr);
	free (arr);
	return (count);
}
