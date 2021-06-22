#include "../include/ft_printf.h"
char	*ft_str_tolower(char *str)
{
	int i;

	i = -1;
	while (str[++i])
		str[i] = ft_tolower(str[i]);
	return (str);
}

char	*filling_base(unsigned long long num_save, int base, char *result, int count)
{
	while (num_save != 0)
	{
		/*cifra*/
		if ((num_save % base) < 10)
		{
			result[count - 1] = (num_save % base) + 48;
		}
		/*bukva*/
		else
		{
			result[count - 1] = (num_save % base) + 55;
		}
		num_save /= base;//LL
		count--;
	}
	return (result);
}

char		*ft_base(unsigned long long  num, int base)
{
	char			*result;
	unsigned long long	num_save;
	int				count;

	result = 0;
	count = 0;
	num_save = num;
	if (num == 0)
		return (ft_strdup("0"));
	/*kol-vo simvolov*/
	while (num != 0)
	{
		num /= base;//LL
		count++;
	}
	if (!(result = malloc(sizeof(char) * (count + 1))))
		return (0);
	result[count] = '\0';
	result = filling_base(num_save, base, result, count);
	return (result);
}
