#include "main.h"
/**
 * _isupper - a function that checks for uppercase character
 * @c: is a character that will be checked
 * Return:1 c is lowercase
 */
int _isupper(int c)
{
	if (c >= 65 && c <= 90)
	{
		return (1);
	}
	return (0);
}
/**
 * *_memset - function that fills memory with a constant byte
 * @s: parameter
 * @b: parameter
 * @n: parameter
 * Return: result
 */
char *_memset(char *s, char b, unsigned int n)
{
	char *ptr = s;

	while (n--)
	{
		*ptr = (unsigned char) b;
		ptr++;
	}
	return (s);
}
/**
 * *_strcat -  a function that concatenates two strings
 * @dest: a parameter
 * @src: a parameter
 * Return: result
 */
char *_strcat(char *dest, char *src)
{
	int len = 0;
	int len2 = 0, i;

	while (dest[len] != '\0')
	{
		len++;
	}
	while (src[len2] != '\0')
	{
		len2++;
	}
	for (i = 0; i < len2; i++)
	{
		dest[len + i] = src[i];
	}
	dest[len + i] = '\0';
	return (dest);
}
/**
 * _isdigit - function that checks for a digit
 * @c: parameter
 * Return:1 (Success)
 */
int _isdigit(int c)
{
	if (c >= 48 && c <= 57)
	{
		return (1);
	}
	return (0);
}
/**
 * *_memcpy - a function that copies memory area
 * @dest: parameter
 * @src: parameter
 * @n: parameter
 * Return: result
 */
char *_memcpy(char *dest, char *src, unsigned int n)
{
	char *p1 = dest;
	char *p2 = src;

	while (n--)
	{
		*p1++ = *p2++;
	}
	return (dest);
}

