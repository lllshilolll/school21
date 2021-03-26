char *ft_strchr(const char *s, int c)
{
    while (*s != '\0' && *s != c)
    {
        s++;
    }
    if (*s  == (char)c)
        return ((char *)s);
    return ((char *)NULL);
}


int main()
{
    unsigned char s1[] = "123456785656";
    unsigned char s2[] = "Hello";
    unsigned char s3[] = "123456785656";
    unsigned char s4[] = "Hello";
    printf("%p \n", ft_strchr(s1, '8'));
    printf("%p \n", strchr(s1, '8'));

    return 0;
}
