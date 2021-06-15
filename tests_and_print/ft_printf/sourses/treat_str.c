#include "../include/ft_printf.h"
int	ft_put_part_str(char *str, t_flags flags)
{
	int count;

	count = 0;
	/*tochnost'*/
	if (flags.dot >= 0)
	{
		/*podgon po simvolam*/
		count += ft_treat_width(flags.dot, ft_strlen(str), 0);
		count += ft_putstrprec(str, flags.dot);
	}
	else
	{
		count += ft_putstrprec(str, ft_strlen(str));
	}
	return (count);
}

int	ft_treat_string(char *str, t_flags flags)
{
	int count;

	count = 0;
	if (!str)
		str = "(null)";
	/*esli tichnost' > len - umenshit' tochnost'*/
	if (flags.dot >= 0 && (size_t)flags.dot > ft_strlen(str))
		flags.dot = ft_strlen(str);
	/*'-' - pechatat' srazu*/
	if (flags.minus == 1)
		count += ft_put_part_str(str, flags);
	/*tochnost' < len*/
	if (flags.dot >= 0)
		count += ft_treat_width(flags.width, flags.dot, 0);
	else
		count += ft_treat_width(flags.width, ft_strlen(str), 0);
	if (flags.minus == 0)
		count += ft_put_part_str(str, flags);
	return (count);
}
