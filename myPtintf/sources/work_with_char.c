/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   work_with_char.c                                   :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: gbethani <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2021/07/02 17:22:46 by gbethani          #+#    #+#             */
/*   Updated: 2021/07/02 17:22:49 by gbethani         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

//#include "ft_printf.h"
#include "../include/ft_printf.h"
int	work_with_char(char c, t_flags flags)
{
	int	count;

	count = 0;
	if (flags.minus == 1)
		ft_putchar(c);
	count = work_width(flags.width, 1, 0);
	if (flags.minus == 0)
		ft_putchar(c);
	return (count + 1);
}
