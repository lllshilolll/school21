char *ft_strstr(const char *str, const char *n)
{
    int i;
    int j;
    int	len;

	i = 0;
    if (!n)
        return ((char *)str);
	len = ft_strlen((char*)n);
	while (str[i])
	{
	    j = 0;
		while (n[j] == str[i + j])
		{
			if (j == len - 1)
				return ((char *)str + i);
			j++;
		}
		i++;
	}
	return (NULL);
}

int main()
{
    unsigned char s1[] = "123456785656";
    unsigned char s2[] = "Hello";
    unsigned char s3[] = "5656";
    unsigned char s4[] = "Hello";
    printf("%p \n", ft_strstr(s1, s3));
    printf("%p \n", strstr(s1, s3));

    return 0;
}
