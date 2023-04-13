#include "main.h"
#include <stddef.h>
#include<stdio.h>
#include <string.h>
#include <stdlib.h>
/**
 * *_calloc - function that allocates memory for an array, using malloc
 * @nmemb: parameter
 * @size: parameter
 * Return: void
 */
/* BY CHARIFA MASBAHI*/
void *_calloc(unsigned int nmemb, unsigned int size)
{
	char *p;

	if (nmemb == 0 || size == 0)
	{
		return (NULL);
	}
	p = malloc(nmemb * size);
	if (!p)
	{
		return (NULL);
	}
	memset(p, 0, nmemb * size);

	return (p);
}
