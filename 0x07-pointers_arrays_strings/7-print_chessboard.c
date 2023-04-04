#include "main.h"
#include <stdio.h>
/**
 * print_chessboard - a function that prints the chessboard
 * @a: parameter
 * Return: void
 */
void print_chessboard(char (*a)[8])
{
	char *p = a;
	int row_size = sizeof(p[0]) / sizeof(p[0][0]);
	int i, j;

	for (i = 0; i < row_size; i++)
	{
		j = 0;
		while (p[i][j] != '\0')
		{
			printf("%d", p[i][j]);
			j++;
		}
		printf("\n");
	}
}
