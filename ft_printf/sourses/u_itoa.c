#include "../include/ft_printf.h"
int	ft_size(long n)
{
	size_t	size;
	/*flafi*/
	size = 0;
	if (n < 0)
	{
		size++;
		n = (-1) * n;
	}
	/*schitaem kol-vo cifr*/
	while (n >= 1)
	{
		size++;
		n /= 10;
	}
	return (size);
}

char	*ft_write_arr(char *result, long nbr, int len, int isneg)
{
	/*esli chislo !=0 - malloc na kol-vo znakov + 1*/
	if (nbr != 0)
		result = malloc(sizeof(char) * (len + 1));
	else
		return (result = ft_strdup("0"));
	if (!result)
		return (0);
	isneg = 0;
	/*unsi < 0*/
	if (nbr < 0)
	{
		isneg++;
		nbr = (-1) * nbr;
	}
	result[len] = '\0';
	/*zapis' znakov v massiv s konca*/
	while (--len)
	{
		result[len] = (nbr % 10) + '0';
		nbr /= 10;
	}
	/*esli < 0 - zapis '-'*/
	if (isneg == 1)
		result[0] = '-';
	else
		result[0] = (nbr % 10) + '0';
	return (result);
}

char	*ft_u_itoa(unsigned int n)
{
	int	len;
	char	*result;
	long	nbr;
	int	isneg;

	nbr = n;
	/*kol-vo znakov*/
	len = ft_size(nbr);
	result = 0;
	isneg = 0;
	/*chislo v massiv*/
	if (!(result = ft_write_arr(result, nbr, len, isneg)))
		return (0);
	return (result);
}
