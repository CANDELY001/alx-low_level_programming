#include "main.h"
/**
 * puts_half - a function that prints half of a string
 * @str: a parameter
 */
void puts_half(char *str)
{
	int i, len;

	len = 0;

	while (str[len] != '\0')
	{
		len++;
	}

	if (len % 2 == 0)
	{
		i = len / 2;
		for (; i < len; i++)
		{
			_putchar(str[i]);
		}
	} else if (len % 2)
	{
		i = (len - 1) / 2;
		for (; i < len - 1; i++)
		{
			_putchar(str[i + 1]);
		}
	}
	_putchar('\n');
}
