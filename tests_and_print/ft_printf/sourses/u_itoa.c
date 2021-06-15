#include "../include/ft_printf.h"
int	ft_estim(long n)
{
	size_t	estim;
	//int	isneg;
	/*flafi*/
	estim = 0;
	//isneg = 0;
	/*esli unsi < 0*/
	if (n < 0)
	{
		estim++;
	//	isneg++;
		n = (-1) * n;
	}
	/*schitaem kol-vo cifr*/
	while (n >= 1)
	{
		estim++;
		n /= 10;
	}
	return (estim);
}

char	*ft_gen(char *rtn, long nbr, int len, int isneg)
{
	/*esli chislo !=0 - malloc na kol-vo znakov + 1*/
	if (nbr != 0)
		rtn = malloc(sizeof(char) * (len + 1));
	else
		return (rtn = ft_strdup("0"));
	if (!rtn)
		return (0);
	isneg = 0;
	/*unsi < 0*/
	if (nbr < 0)
	{
		isneg++;
		nbr = (-1) * nbr;
	}
	rtn[len] = '\0';
	/*zapis' znakov v massiv s konca*/
	while (--len)
	{
		rtn[len] = (nbr % 10) + '0';
		nbr /= 10;
	}
	/*esli < 0 - zapis '-'*/
	if (isneg == 1)
		rtn[0] = '-';
	else
		rtn[0] = (nbr % 10) + '0';
	return (rtn);
}

char	*ft_u_itoa(unsigned int n)
{
	int	len;
	char	*rtn;
	long	nbr;
	int	isneg;

	nbr = n;
	/*kol-vo znakov*/
	len = ft_estim(nbr);
	rtn = 0;
	isneg = 0;
	/*chislo v massiv*/
	if (!(rtn = ft_gen(rtn, nbr, len, isneg)))
		return (0);
	return (rtn);
}
