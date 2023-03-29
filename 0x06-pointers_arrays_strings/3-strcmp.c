#include "main.h"
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
