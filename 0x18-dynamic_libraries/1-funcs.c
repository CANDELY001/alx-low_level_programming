#include "main.h"
#include <string.h>
/**
 * _atoi -  a function that convert string to an integer
 * @s: pointer variable
 * Return: the int converted from string
 */

int _atoi(char *s)
{
	int i, d, n, len, f, digit;

	i = 0;
	d = 0;
	n = 0;
	len = 0;
	f = 0;
	digit = 0;

	while (s[len] != '\0')
		len++;

	while (i < len && f == 0)
	{
		if (s[i] == '-')
			++d;

		if (s[i] >= '0' && s[i] <= '9')
		{
			digit = s[i] - '0';
			if (d % 2)
				digit = -digit;

			n = n * 10 + digit;
			f = 1;
			if (s[i + 1] < '0' || s[i + 1] > '9')
				break;
			f = 0;
		}
		i++;
	}

	if (f == 0)
		return (0);

	return (n);
}
/**
 * *_strchr - Write a function that locates a character in a string
 * @s: parameter
 * @c: parameter
 * Return: result
 */
char *_strchr(char *s, char c)
{
	while (*s != '\0')
	{
		if (*s == c)
		{
			return (s);
		}
		s++;
	}
	if (c == '\0')
	{
		return (s);
	}

	return (NULL);
}
/**
 * _strlen - a function that returns the length of a string
 * @s: a parameter
 * Return: result
 */
int _strlen(char *s)
{
	int i;

	i = strlen(s);
	return (i);
}
/**
 * *_strncpy -  a function that copies a string
 * @dest: a parameter
 * @src: a parameter
 * @n: a parameter
 * Return: result
 */
char *_strncpy(char *dest, char *src, int n)
{
	int i;

	i = 0;
	while (src[i] != '\0' && i < n)
	{
		dest[i] = src[i];
		i++;
	}
	for (; i < n; i++)
	{
		dest[i] = '\0';
	}
	return (dest);
}
/**
 * *_strncat - a function that concatenates two strings
 * @dest: a parameter
 * @src: a parameter
 * @n: a parameter
 * Return: result
 */
char *_strncat(char *dest, char *src, int n)
{
	int len = 0, len2 = 0;

	while (dest[len])
	{
		len++;
	}
	while (src[len2] != '\0' && len2 < n)
	{
		dest[len] = src[len2];
		len++;
		len2++;
	}
	dest[len] = '\0';
	return (dest);
}
