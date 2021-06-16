#include "../include/ft_printf.h"

int	ft_putchar(int c)
{
	ft_putchar_fd((char)c, 1);
	return (1);
}

int	work_width(int width, int minus, int is_zero)
{
	int count;

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

int	ft_putstr(char *str, int size)
{
	int count;

	count = 0;
	while (str[count] && count < size)
		ft_putchar(str[count++]);
	return (count);
}
