#include "main.h"
/**
 * print_binary - prints the binary representation of a number
 * @n: parameter
 * Return: result
 */
/* BY CHARIFA MASBAHI*/
void print_binary(unsigned long int n)
{
	int i = 63, a = 0;
	unsigned long int number;

	while (i >= 0)
	{
		number = n >> i;

		if (number & 1)
		{
			_putchar('1');
			a++;
		} else if (a)
			_putchar('0');
		i--;
	}
	if (a == 0)
		_putchar('0');
}
