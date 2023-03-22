#include "main.h"
/**
 * print_times_table - Write a function that prints the n times table
 * @n: number
*/
void print_times_table(int n)
{
	int i,j,res;

	if (n <= 15 || n > 0)
	{
		for (i = 0; i <= n; i++)
		{
			_putchar('0');
			for (b = 1; b <= n; b++)
			{
				res = b * a;
				if (res < 10)
				{
					_putchar(',');
					_putchar(' ');
					_putchar(' ');
					_putchar(res + '0');
				} else
				{
					_putchar(',');
					_putchar(' ');
					_putchar(res / 10 + '0');
					_putchar(res % 10 + '0');
				}
				_putchar(',');
			}
			_putchar('\n');
		}
	}
}
