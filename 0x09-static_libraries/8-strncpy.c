
#include "main.h"
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
