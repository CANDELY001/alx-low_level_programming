#include "main.h"
int palindrom(char *s, char *c);
char rev_recursion(char *s);
/**
 * is_palindrome - a function that returns 1 if a string is a palindrome
 * @s: parameter
 * Return: result
 */
int is_palindrome(char *s)
{
	if (!*s)
	{
		return (0);
	}
	return (palindrom(s, (char *) rev_recursion(s)));
}
/**
 * palindrom - a function that returns 1
 * @s: parameter
 * @c: parameter
 * Return: result
 */
int palindrom(char *s, char *c)
{
	if (*s && *c)
	{
		if (*s != *c)
		{
			return (0);
		}
		return (palindrom(s + 1, c + 1));
	}
}
/**
 * rev_recursion - return the reverse of a string
 * @s: parameter
 * @c: paremeter
 * Return: result
 */
char rev_recursion(char *s)
{
	char *p;
	unsigned int i = 0;

	if (*s)
	{
		rev_recursion(s + 1);
		p[i++] = *s;
	}
	return (p);
}
