#include "main.h"
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
		ptr ++;
	}
	return (s);
}
