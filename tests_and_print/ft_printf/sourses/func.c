#include "../include/ft_printf.h"

int	ft_putchar(int c)
{
	ft_putchar_fd((char)c, 1);
	return (1);
}

int	ft_treat_width(int width, int minus, int has_zero)
{
	int count;

	count = 0;
	while (width - minus > 0)
	{
		if (has_zero)
			ft_putchar('0');
		else
			ft_putchar(' ');
		width -= 1;
		count++;
	}
	return (count);
}

int	ft_putstrprec(char *str, int prec)
{
	int count;

	count = 0;
	while (str[count] && count < prec)
		ft_putchar(str[count++]);
	return (count);
}
