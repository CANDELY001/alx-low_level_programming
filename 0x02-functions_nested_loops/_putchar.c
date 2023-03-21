#include "main.h"
#include <unistd.h>
/**
 * _putchar - takes an integer argument to write it to stdout
 * @c: the character that will be printed
 * Return:0 (Success)
 */
int _putchar(char c)
{
	write(1, &c, strlen());
	return (0);
}
