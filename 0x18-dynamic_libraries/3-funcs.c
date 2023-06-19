#include "main.h"
#include <unistd.h>
/**
 * *_strpbrk - a function that searches a string for any of a set of bytes
 * @s: parameter
 * @accept: parameter
 * Return: result
 */
char *_strpbrk(char *s, char *accept)
{
	char *p1 = s;
	char *p2;

	while (*p1 != '\0')
	{
		p2 = accept;
		while (*p2 != '\0')
		{
			if (*p1 == *p2)
			{
				return (p1);
			}
			p2++;
		}
		p1++;
	}
	return (NULL);
}
/**
 * *_strstr - a function that locates a substring
 * @haystack: parameter
 * @needle: parameter
 * Return: result
 */
char *_strstr(char *haystack, char *needle)
{
	char *p1, *p2;

	if (*needle == '\0')
	{
		return (haystack);
	}
	while (*haystack != '\0')
	{
		p1 = haystack;
		p2 = needle;
		while (*p1 != '\0' && *p2 != '\0' && *p1 == *p2)
		{
			p1++;
			p2++;
		}
		if (*p2 == '\0')
		{
			return (haystack);
		}
		haystack++;
	}
	return (NULL);
}
/**
 * _abs - a function that computes the absolute value of an integer
 * @n: paramter
 * Return: the absolute value
 */
int _abs(int n)
{
	if (n < 0)
	{
		return (n * -1);
	}
	return (n);
}
/**
 * *_strcpy - copie the string pointed to src
 * @dest: pointer vriable
 * @src: pointer variable
 * Return: void return nothing
 */

char *_strcpy(char *dest, char *src)
{
	int len, i;

	len = 0;

	while (src[len] != '\0')
	{
		len++;
	}

	for (i = 0; i < len; i++)
	{
		dest[i] = src[i];
	}
	dest[i] = '\0';

	return (dest);
}
/**
 * _putchar - takes an integer argument to write it to stdout
 * @c: the character that will be printed
 * Return:0 (Success)
 */
int _putchar(char c)
{
	write(1, &c, 1);
	return (0);
}
