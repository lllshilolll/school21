#include "../include/ft_printf.h"

int	lennum(long int in)
{
	int	cnt;

	if (in == 0)
		return (1);
	cnt = 0;
	while (in != 0)
	{
		in /= 10;
		cnt++;
	}
	return (cnt);
}

int	ft_int_neg(int flag)
{
	if (flag == 1)
	{
		ft_putchar('-');
		return (1);
	}
	else
		return (0);
}

int	ft_wrap(int kol, t_flags flags, int fl, int flag)
{
	int	count;

	count = 0;
	if (fl)
	{
		if (flags.precision >= 0 || flags.minus == 1)
		{
			if (flags.precision >= kol + flag)
				count += work_width(flags.width - flag, flags.precision, 0);
			else
				count += work_width(flags.width, kol + flag, 0);
		}
		else
			count += work_width(flags.width, kol + flag, flags.zero);
	}
	if (!fl)
	{
		if (flags.precision >= 0)
			count += work_width(flags.precision, kol, 1);
	}
	return (count);
}

int	ft_treatment_int(int kol, t_flags flags, char *arr, int flag)
{
	int	count;

	count = 0;
	if (flags.precision == -1 && flags.zero == 1)
	{
		count += ft_int_neg(flag);
		count += ft_wrap(kol, flags, 1, flag);
		count += ft_putstr(arr, kol);
	}
	else if (flags.minus == 1)
	{
		count += ft_int_neg(flag);
		count += ft_wrap(kol, flags, 0, flag);
		count += ft_putstr(arr, kol);
		count += ft_wrap(kol, flags, 1, flag);
	}
	else
	{
		count += ft_wrap(kol, flags, 1, flag);
		count += ft_int_neg(flag);
		count += ft_wrap(kol, flags, 0, flag);
		count += ft_putstr(arr, kol);
	}
	return (count);
}

int	work_with_int(int li, t_flags flags)
{
	int		count;
	int		kol;
	char	*arr;
	int		flag;

	flag = 0;
	if (li < 0)
		flag = 1;
	count = 0;
	kol = lennum(li);
	arr = ft_itoa(li);
	if (flags.precision == 0 && li == 0)
		kol = 0;
	count += ft_treatment_int(kol, flags, arr, flag);
	free(arr);
	return (count);
}
