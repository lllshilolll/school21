#include "libft.h"

int main ()
{
    /*memset - заполняет память определенным символом 
	 * заполняет первые n байтов той области памяти, на которую указывает dest, постоянным байтом c.*/

/**	unsigned char src1[15] = "88888888";
    unsigned char src2[15] = "88888888";
    ft_memset (src1, '1', 5);
    memset (src2, '1', 5);
    printf ("src1: %s\n",src1);
    printf ("src2: %s\n",src2);*/

/*bzero - записывает пустые байты
 * Функция bzero() устанавливает первые n байтов области, начинающейся с s в нули (пустые байты).*/  
/*char s1[15] = "1234567890";
    char s2[15] = "1234567890";
	bzero(s1 , 4);
	ft_bzero(s2 , 4);
	printf("%s \n", s1);
	printf("%s \n", s2);
	*/

	/*Функция memcpy() копирует n байтов из области памяти src в область памяти dest. Области памяти не могут пересекаться.*/
	/*char s1[15] = "1234567890";
    char s2[15] = "Hello";
    char s3[15] = "1234567890";
    char s4[15] = "Hello";
   printf("%s \n", ft_memcpy(s1, s2, 3));
   printf("%s \n", memcpy(s3, s4, 3));*/

	/*memccpy - копирует область памяти  
Функция memccpy() копирует не более n байтов из области памяти src в область памяти dest, прекращая работу при обнаружении символа c.  */
/*    unsigned char s1[15] = "1234567890";
    unsigned char s2[15] = "Hello";
    unsigned char s3[15] = "1234567890";
    unsigned char s4[15] = "Hello";
   printf("%s \n", ft_memccpy(s1, s2, 'l', 3));
   printf("%s \n", memccpy(s3, s4, 'l', 3));
*/
	/*memmove - копирует область памяти  
Функция memmove() копирует n байтов из области памяти src в облать памяти dest. Области памяти могут перекрываться.*/
	/*unsigned char s1[15] = "1234567890";
    unsigned char s2[15] = "Hello";
    unsigned char s3[15] = "1234567890";
    unsigned char s4[15] = "Hello";
   printf("%s \n", ft_memmove(s1, s2, 10));
   printf("%s \n", memmove(s3, s4, 10));*/

	/*memchr, memrchr - ведет поиск символа в памяти  
Функция memchr() ищет символ c в первых n байтах той области памяти, на которую указывает s. Совпадение первого байта с c (представленным как беззнаковый символ) останавливает выполнение операции.*/
	/*unsigned char s1[10] = "1234567890";
 	printf("%p \n", ft_memchr(s1, '4', 5));
	printf("%p \n", memchr(s1, '4', 5));*/

	/*memcmp - сравнивает области памяти  
Функция memcmp() сравнивает первые n байтов областей памяти s1 и s2. Возвращается целое число, меньшее, большее нуля или равное ему, если определено, что s1 меньше, больше, чем s2, или равно ему.  */
	/*unsigned char s1[20] = "123456785656";
	unsigned char s2[20] = "123456785";
   printf("%d \n", ft_memcmp(s1, s2, 10));
   printf("%d \n", memcmp(s1, s2, 10));
*/

	/*strlen - вычисляет длину строки  */
/*	const char s1[20] = "123456785656";
    const char s2[15] = "123456785";
   printf("%lu \n", ft_strlen(s1));
   printf("%lu \n", ft_strlen(s2));
   printf("%lu \n", strlen(s1));
   printf("%lu \n", strlen(s2));
*/



}

