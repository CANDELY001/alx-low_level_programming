#include <stdio.h>
#include <stdlib.h>
#include "main.h"
#include <stddef.h>
/**
 * *malloc_checked -  function that allocates memory using malloc
 * @b: parameter
 * Return: void
 */
void *malloc_checked(unsigned int b)
{
	char *p;

	p = malloc(b);
	if (p == NULL)
	{
		exit(98);
	}
	return (p);
}
