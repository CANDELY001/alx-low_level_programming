#include "main.h"
#include <stddef.h>
#include<stdio.h>
#include <string.h>
#include <stdlib.h>
/**
 * *array_range - function that creates an array of integers.
 * @min: parameter
 * @max: parameter
 * Return: result
 */
/* BY CHARIFA MASBAHI*/
int *array_range(int min, int max)
{
	int *p, i = 0, s;

	if (min > max)
	{
		return (NULL);
	}
	s = max - min + 1;
	p = (int *) malloc(s * sizeof(int));
	if (!p)
	{
		return (NULL);
	}
	while (max >= min)
	{
		*(p + i) = min++;
		i++;
	}
	return (p);
}
