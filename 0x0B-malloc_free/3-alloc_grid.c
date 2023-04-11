#include "main.h"
#include <stddef.h>
#include<stdio.h>
#include <string.h>
#include <stdlib.h>
/**
 * **alloc_grid - returns a pointer to a 2 dimensional array of integers
 * @width: parameter
 * @height: parameter
 * Return: result
 */
/* BY CHAIRFA MASBAHI*/
int **alloc_grid(int width, int height)
{
	int **m;
	int i, j;

	if (width <= 0 || height <= 0)
		return (NULL);

	m = (int **) malloc(height * sizeof(int *));

	if (m == NULL)
		return (NULL);

	for (i = 0; i < height; i++)
	{
		m[i] = (int *) malloc(width * sizeof(int));

		if (m[i] == NULL)
		{
			free(m);
			for (j = 0; j <= i; j++)
			{
				free(m[j]);
			}
			return (NULL);
		}
	}

	for (i = 0; i < height; i++)
	{
		for (j = 0; j < width; j++)
		{
			m[i][j] = 0;
		}
	}

	return (m);
}
