#ifndef FT_PRINTF_H
# define FT_PRINTF_H

# include "libft.h"
# include <stdarg.h>

typedef struct s_flags
{
	int	type;
	int	width;
	int	minus;
	int	zero;
	int	precision;
	int	star;
}				t_flags;
int		ft_printf(const char *apFormat, ...);
int		work_with_apFormat(const char *str, va_list aps);
t_flags		clean_flags();
int		ft_flag_parse(const char *str, int i, t_flags *flags, va_list aps);
int		ft_is_type(int c);
int		ft_is_flags(int c);
int		ft_flag_precision(const char *save, int start, t_flags *flags, va_list aps);
t_flags		ft_flag_minus(t_flags flags);
t_flags		ft_flag_width(va_list aps, t_flags flags);
t_flags		ft_flag_digit(char c, t_flags flags);
int		what_type(int c, t_flags flags, va_list aps);
int        work_width(int width, int minus, int is_zero);

int work_with_char(char c, t_flags flags);
int		work_with_str(char *str, t_flags flags);
int		work_with_point(void  *p, t_flags flags);
int		work_with_int(int i, t_flags flags);
int		work_u(unsigned int unsi, t_flags flags);
int	work_x(unsigned int ui, int lower, t_flags flags);
int	work_with_percent(t_flags flags);

char        *ft_base(unsigned long long num);
int    ft_putchar(int c);
int    ft_putstr(char *str, int size);
char        *ft_str_tolower(char *str);
#endif
