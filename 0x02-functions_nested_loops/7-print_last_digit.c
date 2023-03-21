#include "main.h"
/**
 * print_last_digit - a function that prints the last digit of a number
 * @n: the paramter
 * Return: last the digit of number
*/
int print_last_digit(int n)
{
	int i = 0;

	i = n % 10;
	if (i < 0)
	{
		i *= -1;
	}
	_putchar(i + '0');
	return (i);
}
