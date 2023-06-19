#include "main.h"
/**
 * _islower - a function that checks for lowercase character
 * @c: is a character that will be checked
 * Return:1 c is lowercase
 */
int _islower(int c)
{
	if (c >= 97 && c <= 122)
	{
		return (1);
	}
	return (0);
}
/**
 * _puts - a function that prints a string, followed by a new line, to stdout
 * @str: a parameter
 */
void _puts(char *str)
{
	int i = 0;

	for (; str[i] != '\0'; i++)
	{
		_putchar(str[i]);
	}
	_putchar('\n');
}
/**
 * _strcmp -  a function that compares two strings
 * @s1: a parameter
 * @s2: a parameter
 * Return: result
 */
int _strcmp(char *s1, char *s2)
{
	while (*s1 == *s2)
	{
		if (*s1 == '\0')
		{
			return (0);
		}
		s1++;
		s2++;
	}
	return (*s1 - *s2);
}
/**
 * _strspn - a function that gets the length of a prefix substring
 * @s: parameter
 * @accept: parameter
 * Return: result
 */
unsigned int _strspn(char *s, char *accept)
{
	int n = 0, b;
	char *p1 = s;
	char *p2;

	while (*p1 != '\0')
	{
		b = 0;
		p2 = accept;

		while (*p2 != '\0')
		{
			if (*p1 == *p2)
			{
				n++;
				b = 1;
			}
			p2++;
		}
		if (b == 0)
		{
			return (n);
		}

		p1++;
	}
	return (0);
}
/**
 * _isalpha - a function that checks for alphabetic character
 * @c: is character that will be checked
 * Return: 1 is alphabetic
 */
int _isalpha(int c)
{
	if ((c >= 97 && c <= 122) || (c >= 65 && c <= 90))
	{
		return (1);
	}
	return (0);
}
