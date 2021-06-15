#include "../include/ft_printf.h"
/*esli eto [cspdiuxX%] return 1*/ 
int	ft_is_in_type_list(int c)
{
	return ((c == 'c') || (c == 's') || (c == 'p') || (c == 'd') || (c == 'i')
			|| (c == 'u') || (c == 'x') || (c == 'X') || (c == '%'));
}

/* "-"-otricatel'na'a shirina pol'a, " "-probel pered str./num., "0"-dobavl'aet 0 s leva, "."-tochnost', "*"-vstavit' argument*/
int	ft_is_in_flags_list(int c)
{
	return ((c == '-') || (c == ' ') || (c == '0') || (c == '.') || (c == '*'));
}

int	ft_treatment(int c, t_flags flags, va_list aps)
{
	int count;

	count = 0;
	if (c == 'c')
		count = ft_treat_char(va_arg(aps, int), flags);
	else if (c == 's')
		count = ft_treat_string(va_arg(aps, char *), flags);
	else if (c == 'p')
		count = ft_treat_pointer(va_arg(aps, unsigned long), flags);
	else if (c == 'd' || c == 'i')
		count = ft_treat_int(va_arg(aps, int), flags);
	else if (c == 'u')
		count += ft_treat_uint(va_arg(aps, unsigned int),
		flags);
	else if (c == 'x')
		count += ft_treat_hexa(va_arg(aps, unsigned), 1, flags);
	else if (c == 'X')
		count += ft_treat_hexa(va_arg(aps, unsigned), 0, flags);
	else if (c == '%')
		count += ft_treat_percent(flags);
	return (count);
}
