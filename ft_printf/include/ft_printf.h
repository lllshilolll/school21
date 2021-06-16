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
}t_flags;

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
int		work_with_char(char c, t_flags flags);
int		work_width(int width, int minus, int is_zero);
int		work_with_str(char *str, t_flags flags);
int		ft_write_str(char *str, t_flags flags);
int		ft_putstr(char *str, int size);
int		work_with_point(unsigned long ull, t_flags flags);
char		*ft_base(unsigned num, int base);
char		*filling_base(unsigned num_save, int base, char *rtn, int count);
char		*ft_str_tolower(char *str);
int		ft_write_point(char *point, t_flags flags);
int		work_with_int(int i, t_flags flags);
int		ft_write_int(char *arr_i, int save_i, t_flags flags);
int		ft_in_write_int(char *arr_i, int save_i, t_flags flags);
int		work_u(unsigned int unsi, t_flags flags);

char		*ft_u_itoa(unsigned int n);
int		ft_size(long n);
char		*ft_write_arr(char *result, long nbr, int len, int isneg);

int	ft_part_u(char *u_int, t_flags flags);
int	ft_in_part_u(char *u_int, t_flags flags);
int	work_x(unsigned ui, int lower, t_flags flags);
int	work_part_x(char *x, t_flags flags);
int	ft_write_x(char *x, t_flags flags);
int	work_with_percent(t_flags flags);
int	ft_putchar(int c);

#endif
