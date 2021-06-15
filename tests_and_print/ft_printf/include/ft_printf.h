#ifndef FT_PRINTF_H
# define FT_PRINTF_H

# include "libft.h"
# include <stdarg.h>

typedef struct s_flags
{
	int	already_print;
	int	type;
	int	width;
	int	minus;
	int	zero;
	int	dot;//precision
	int	star;
}t_flags;

int		ft_printf(const char *apFormat, ...);
int		ft_treat_save(const char *save, va_list aps);
t_flags		ft_init_flags();
int		ft_flag_parse(const char *save, int i, t_flags *flags, va_list aps);
int		ft_is_in_type_list(int c);
int		ft_is_in_flags_list(int c);
int		ft_flag_dot(const char *save, int start, t_flags *flags, va_list aps);
t_flags		ft_flag_minus(t_flags flags);
t_flags		ft_flag_width(va_list aps, t_flags flags);
t_flags		ft_flag_digit(char c, t_flags flags);
int		ft_treatment(int c, t_flags flags, va_list aps);
int		ft_treat_char(char c, t_flags flags);
int		ft_treat_width(int width, int minus, int has_zero);
int		ft_treat_string(char *str, t_flags flags);
int	ft_put_part_str(char *str, t_flags flags);
int		ft_putstrprec(char *str, int prec);
int		ft_treat_pointer(unsigned long ull, t_flags flags);
char		*ft_ull_base(unsigned ull, int base);
char	*treat_base(unsigned ull_save, int base, char *rtn, int count);
char		*ft_str_tolower(char *str);
int	ft_in_put_part_pointer(char *pointer, t_flags flags);
int		ft_treat_int(int i, t_flags flags);
int	ft_put_part_int(char *d_i, int save_i, t_flags flags);
int	ft_in_put_part_int(char *d_i, int save_i, t_flags flags);
int		ft_treat_uint(unsigned int unsi, t_flags flags);
char		*ft_u_itoa(unsigned int n);
int	ft_estim(long n);
char	*ft_gen(char *rtn, long nbr, int len, int isneg);
int	ft_put_part_uint(char *unsi_int, t_flags flags);
int	ft_in_put_part_uint(char *unsi_int, t_flags flags);
int		ft_treat_hexa(unsigned ui, int lower, t_flags flags);
int	ft_put_part_hexa(char *hexa, t_flags flags);
int	ft_in_put_part_hexa(char *hexa, t_flags flags);
int	ft_treat_percent(t_flags flags);
int	ft_putchar(int c);
char	*ft_itoa(int i);


#endif
