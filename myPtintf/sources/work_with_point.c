/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   work_with_point.c                                  :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: gbethani <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2021/07/02 17:23:36 by gbethani          #+#    #+#             */
/*   Updated: 2021/07/02 19:31:09 by gbethani         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

//#include "ft_printf.h"
#include "../include/ft_printf.h"
int	ft_point_minus(t_flags flags, char *point)
{
	int		count;
	size_t	len;

	count = 0;
	len = ft_strlen(point);
	count += ft_putstr("0x", 2);
	if ((size_t)flags.precision > len)
		count += work_width(flags.precision, len, 1);
	count += ft_putstr(point, len);
	if ((size_t)flags.width > len)
		count += work_width(flags.width, len + 2, 0);
	return (count);
}

int	ft_point_ne_minus(t_flags flags, char *point)
{
	int		count;
	size_t	len;

	count = 0;
	len = ft_strlen(point);
	if ((size_t)flags.width > len && flags.zero == 0)
		count += work_width(flags.width, len + 2, 0);
	count += ft_putstr("0x", 2);
	if ((size_t)flags.width > len && flags.zero == 1)
		count += work_width(flags.width, len + 2, 1);
	if ((size_t)flags.precision > len)
		count += work_width(flags.precision, len, 1);
	count += ft_putstr(point, len);
	return (count);
}

int	ft_point_zero(t_flags flags)
{
	int	count;

	count = 0;
	if (flags.minus == 1)
		count += ft_putstr("0x", 2);
	count += work_width(flags.width, 2, flags.zero);
	if (flags.minus == 0)
		count += ft_putstr("0x", 2);
	return (count);
}

int	work_with_point(void *p, t_flags flags)
{
	int					count;
	unsigned long long	ull;
	size_t				len;
	char				*point;

	count = 0;
	ull = (unsigned long long)p;
	if (p == 0 && flags.precision == 0)
	{
		count += ft_point_zero(flags);
		return (count);
	}
	point = ft_base(ull);
	point = ft_str_tolower(point);
	len = ft_strlen(point);
	if ((size_t)flags.precision < len)
		flags.precision = len;
	if (flags.minus == 1)
		count += ft_point_minus(flags, point);
	if (flags.minus == 0)
		count += ft_point_ne_minus(flags, point);
	free(point);
	return (count);
}
