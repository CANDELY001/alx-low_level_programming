#include "main.h"
/**
 * print_line - a function that draws a straight line in the terminal
 * @n: parameter
 * Return: void
 */
void print_line(int n)
{
	if(n <= 0)
	{
		_putchar('\n');
	} else
	{
		for (; n >0; n--)
		{
			_putchar('-');
		}
	}
	_putchar('\n');
}
