#include "../include/ft_printf.h"

/*???*/
int	ft_in_put_part_pointer(char *pointer, t_flags flags)
{
	int count;

	count = 0;
	/*pechat' - pervie 2 simvola*/
	count += ft_putstrprec("0x", 2);
	/*tochnost'*/
	if (flags.dot >= 0)
	{
		/*zapisivaem '0' do tochnosti*/
		count += ft_treat_width(flags.dot, ft_strlen(pointer), 1);
		/*ostatok pechatat'*/
		count += ft_putstrprec(pointer, flags.dot);
	}
	/*prosto pechat' pointer*/
	else
		count += ft_putstrprec(pointer, ft_strlen(pointer));
	return (count);
}

int	ft_treat_pointer(unsigned long ull, t_flags flags)
{
	char	*pointer;
	int	count;

	count = 0;
	/*esli 'null'*/
	if ((unsigned)ull == 0 && flags.dot == 0)
	{
		/*print 0x + dobit' shirinu '0'*/
		count += ft_putstrprec("0x", 2);
		return (count += ft_treat_width(flags.width, 0, 1));
	}
	/*massiv chisla v 16-forme*/
	pointer = ft_ull_base((unsigned)ull, 16);
	/*zaglavnie v strochnie*/
	pointer = ft_str_tolower(pointer);
	/*njchnost' < len*/
	if ((size_t)flags.dot < ft_strlen(pointer))
		flags.dot = ft_strlen(pointer);
	if (flags.minus == 1)
		count += ft_in_put_part_pointer(pointer, flags);
	count += ft_treat_width(flags.width, ft_strlen(pointer) + 2, 0);
	if (flags.minus == 0)
		count += ft_in_put_part_pointer(pointer, flags);
	free(pointer);
	return (count);
}
