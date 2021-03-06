/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_putchar_fd.c                                    :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: gbethani <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2021/04/22 16:59:41 by gbethani          #+#    #+#             */
/*   Updated: 2021/06/27 20:47:06 by gbethani         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

//#include "ft_printf.h"
#include "../include/ft_printf.h"
int	ft_putchar(int c)
{
	write(1, &c, 1);
	return (1);
}

int	ft_putstr(char *str, int size)
{
	int	count;

	count = 0;
	while (str[count] && count < size)
		ft_putchar(str[count++]);
	return (count);
}

int	work_width(int width, int minus, int is_zero)
{
	int	count;

	count = 0;
	while (width - minus > 0)
	{
		if (is_zero)
			ft_putchar('0');
		else
			ft_putchar(' ');
		width -= 1;
		count++;
	}
	return (count);
}
