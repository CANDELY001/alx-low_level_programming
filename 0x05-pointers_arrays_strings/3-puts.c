#include "main.h"
#include <stdio.h>
/**
 * _puts - a function that prints a string, followed by a new line, to stdout
 * @str: a parameter
*/
void _puts(char *str)
{
	int i = 0;

	for (; str[i] != '\0'; i++)
	{
		puts(str[i]);
	}
	puts('\n');
}
