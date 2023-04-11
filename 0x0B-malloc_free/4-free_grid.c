#include "main.h"
#include <stddef.h>
#include<stdio.h>
#include <string.h>
#include <stdlib.h>
/**
 * free_grid - frees a 2 dimensional grid
 * @grid: parameter
 * @height: parameter
 * Return: void
 */
/* BY CHARIFA MASBAHI*/
void free_grid(int **grid, int height)
{
	int i;

	if (grid == NULL || height == 0)
		return;

	for (i = 0; i < height; i++)
		free(grid[i]);

	free(grid);
}
