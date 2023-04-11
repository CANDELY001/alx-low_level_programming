#include "main.h"
#include<stdio.h>
#include <stdlib.h>
#include <stddef.h>
/**
 * *create_array - unction that creates an array of chars, and initializes
 * @size: parameter
 * @c: parameter
 * Return: resullt
 */
/* By CHARIFA MASBAHI*/
char *create_array(unsigned int size, char c)
{
	char *p;
	unsigned int i = 0;

	if (size == 0)
	{
		return (NULL);
	}
	p = (char *) malloc(size * sizeof(char));

	if (p == 0)
	{
		return (NULL);
	}
	while (i < size)
	{
		*(p + 1) = c;
		i++;
	}
	return (p);
}
