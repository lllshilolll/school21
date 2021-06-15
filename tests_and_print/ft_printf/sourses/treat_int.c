#include "../include/ft_printf.h"
int	ft_in_put_part_int(char *d_i, int save_i, t_flags flags)
{
	int count;

	count = 0;
	if (save_i < 0 && flags.dot >= 0)
		ft_putchar('-');
	/*esli ukazana tochnost' dobivaem sleva '0'*/
	if (flags.dot >= 0)
		count += ft_treat_width(flags.dot - 1, ft_strlen(d_i) - 1, 1);
	/*pechataem*/
	count += ft_putstrprec(d_i, ft_strlen(d_i));
	return (count);
}

int	ft_put_part_int(char *d_i, int save_i, t_flags flags)
{
	int count;

	count = 0;
	/*esli '-' srazu pechataem*/
	if (flags.minus == 1)
		count += ft_in_put_part_int(d_i, save_i, flags);
	/*esli tichnost' < len dot = len*/
	if (flags.dot >= 0 && (size_t)flags.dot < ft_strlen(d_i))
		flags.dot = ft_strlen(d_i);
	/*esli dot biggg*/
	if (flags.dot >= 0)
	{
		flags.width -= flags.dot;
		count += ft_treat_width(flags.width, 0, 0);
	}
	else
		count += ft_treat_width(flags.width, ft_strlen(d_i), flags.zero);
	if (flags.minus == 0)
		count += ft_in_put_part_int(d_i, save_i, flags);
	return (count);
}

int	ft_treat_int(int i, t_flags flags)
{
	char	*d_i;
	int	save_i;
	int	count;

	save_i = i;
	count = 0;
	/*esli '0' shirinu dobivaem ' '-mi*/
	if (flags.dot == 0 && i == 0)
	{
		count += ft_treat_width(flags.width, 0, 0);
		return (count);
	}
	/*esli i<0 i (ili tochnost' ukazana ili nado zapolnit' '0'-mi*/
	if (i < 0 && (flags.dot >= 0 || flags.zero == 1))
	{
		/*esli est' %0 i i<0 i net tochnosti*/
		if (flags.zero == 1 && flags.dot == -1)
			ft_putstrprec("-", 1);
		i *= -1;
		//flags.zero = 1;
		flags.width--;
		count++;
	}
	/*zagon'aem chislo v massiv*/
	d_i = ft_itoa(i);
	count += ft_put_part_int(d_i, save_i, flags);
	free(d_i);
	return (count);
}
