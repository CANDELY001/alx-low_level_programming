#include "main.h"
/**
 * print_rev - a function that prints a string, in reverse
 * @s: a parameter
 */
void print_rev(char *s)
{
	int i = 0;
	int len;

	while(s[i] != '\0')
	{
		i++;
	}
	len = i;

	for (i = len - 1; i >= 0; i--)
	{
		_putchar(s[i]);
	}
	_putchar('\n');
}
