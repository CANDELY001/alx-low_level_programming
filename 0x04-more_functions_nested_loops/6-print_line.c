#include "main.h"

/**
 * print_line - a fucntion that print line
 * @n: variable input
 * Return: void return nothing
 */

void print_line(int n)
{
	if (n <= 0)
	{
		_putchar('\n');
	}
	else
	{
		int i;

		for (i = 0; i < n; i++)
		{
			_putchar('_');
		}
		_putchar('\n');
	}
}
