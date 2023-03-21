#include "main.h"
/**
 * times_table - a function that prints the 9 times table, starting with 0
*/
void times_table(void)
{
	int a, b, res;

	for (a = 0; a <= 9; a++)
	{
		for (b = 0; b <= 9; b++)
		{
			res = b * a;
			if (res < 10)
			{
				putchar(' ');
				putchar(res + '0');
			} else
			{
				putchar(res / 10 + '0');
				putchar(res % 10 + '0');
			}
			if (b < 9)
			{
				putchar(',');
				putchar(' ');
			}
		}
		putchar('\n');
	}
}
