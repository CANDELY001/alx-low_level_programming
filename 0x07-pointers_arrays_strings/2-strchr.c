#include "main.h"
/**
 * *_strchr - Write a function that locates a character in a string
 * @s: parameter
 * @c: parameter
 * Return: result
 */
char *_strchr(char *s, char c)
{
	while (*s != '\0')
		if ( *s == c)
			return ((char *)s);
	        s++;
	if (c == '\0')
		return ((char *)s);

	return NULL;
}
