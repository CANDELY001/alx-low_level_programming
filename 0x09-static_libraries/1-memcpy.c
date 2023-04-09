#include "main.h"
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
