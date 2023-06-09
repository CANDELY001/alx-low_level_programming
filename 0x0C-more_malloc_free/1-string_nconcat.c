#include <stdio.h>
#include <stdlib.h>
#include "main.h"
#include <stddef.h>
#include <string.h>
/**
 * *string_nconcat - function that concatenates two strings
 * @s1: parameter
 * @s2: parameter
 * @n: parameter
 * Return: result
 */
/* BY CHARIFA MASBAHI*/
char *string_nconcat(char *s1, char *s2, unsigned int n)
{
	char *p;
	unsigned int i = 0, j = 0;

	if (!s1)
	{
		s1 = "";
	}
	if (!s2)
	{
		s2 = "";
	}
	if (n >= strlen(s2))
	{

		n  = strlen(s2);
	}
	p = (char *) malloc((strlen(s1) + n + 1) * sizeof(char));
	if  (!p)
	{
		return (NULL);
	}
	while (i < strlen(s1))
	{
		*(p + i) = *(s1 + i);
		i++;
	}
	while (i < (strlen(s1) + n))
	{
		*(p + i) = *(s2 + j);
		i++;
		j++;
	}
	*(p + i) = '\0';
	return (p);
}
