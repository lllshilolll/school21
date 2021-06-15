#include "../include/ft_printf.h"
char	*ft_str_tolower(char *str)
{
	int i;

	i = -1;
	while (str[++i])
		str[i] = ft_tolower(str[i]);
	return (str);
}

char	*treat_base(unsigned ull_save, int base,
char *rtn, int count)
{
	while (ull_save != 0)
	{
		/*cifra*/
		if ((ull_save % base) < 10)
			rtn[count - 1] = (ull_save % base) + 48;
		/*bukva*/
		else
			rtn[count - 1] = (ull_save % base) + 55;
		ull_save /= base;
		count--;
	}
	return (rtn);
}

char		*ft_ull_base(unsigned ull, int base)
{
	char			*rtn;
	unsigned		ull_save;
	int			count;

	rtn = 0;
	count = 0;
	ull_save = ull;
	if (ull == 0)
		return (ft_strdup("0"));
	/*kol-vo simvolov*/
	while (ull != 0)
	{
		ull /= base;
		count++;
	}
	if (!(rtn = malloc(sizeof(char) * (count + 1))))
		return (0);
	rtn[count] = '\0';
	rtn = treat_base(ull_save, base, rtn, count);
	return (rtn);
}
