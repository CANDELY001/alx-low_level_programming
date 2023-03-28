#include "main.h"
/**
 * puts2 -  a function that prints every other character of a string
 * @str: parameter
 */
void puts2(char *str)
{
	int i = 0, len = 0;

	while (str[i] != '\0')
	{
		len++;
	}
	for (; i < len; i = i + 2)
	{
		_putchar(str[i]);
	}
	_putchar('\n');
}
