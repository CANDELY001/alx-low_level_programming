#include "main.h"
#include <stdio.h>
/**
 * print_chessboard - a function that prints the chessboard
 * @a: parameter
 * Return: void
 */
void print_chessboard(char (*a)[8])
{
	/*int row_size = sizeof(a[0]) / sizeof(a[0][0]);*/
	int i, j;

	for (i = 0; i < 8; i++)
	{
		j = 0;
		while (a[i][j] != '\0')
		{
			_putchar(a[i][j]);
			j++;
		}
		_putchar('\n');
	}
}
