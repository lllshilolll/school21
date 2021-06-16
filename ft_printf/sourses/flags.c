#include "../include/ft_printf.h"
/*esli eto [cspdiuxX%] return 1*/ 
int	ft_is_type(int c)
{
	return ((c == 'c') || (c == 's') || (c == 'p') || (c == 'd') || (c == 'i')
			|| (c == 'u') || (c == 'x') || (c == 'X') || (c == '%'));
}

/* "-"-otricatel'na'a shirina pol'a, " "-probel pered str./num., "0"-dobavl'aet 0 s leva, "."-tochnost', "*"-vstavit' argument*/
int	ft_is_flags(int c)
{
	return ((c == '-') || (c == ' ') || (c == '0') || (c == '.') || (c == '*'));
}

int	what_type(int c, t_flags flags, va_list aps)
{
	int count;

	count = 0;
	if (c == 'c')
		count = work_with_char(va_arg(aps, int), flags);
	else if (c == 's')
		count = work_with_str(va_arg(aps, char *), flags);
	else if (c == 'p')
		count = work_with_point(va_arg(aps, unsigned long long), flags);
	else if (c == 'd' || c == 'i')
		count = work_with_int(va_arg(aps, int), flags);
	else if (c == 'u')
		count += work_u(va_arg(aps, unsigned int),flags);
	else if (c == 'x')
		count += work_x(va_arg(aps, unsigned int), 1, flags);
	else if (c == 'X')
		count += work_x(va_arg(aps, unsigned int), 0, flags);
	else if (c == '%')
		count += work_with_percent(flags);
	return (count);
}
