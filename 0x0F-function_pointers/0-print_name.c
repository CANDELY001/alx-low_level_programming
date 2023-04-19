#include "main.h"
#include <stdio.h>
/**
 * print_name - function that prints a name
 * @name: parameter
 * @f: point of function
 * Return: void
 */
/* BY CHARIFA MASBAHI*/
void print_name(char *name, void (*f)(char *))
{
	f(*name);
}
