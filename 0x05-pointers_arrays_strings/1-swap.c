#include "main.h"
/**
 * swap_int - a function that swaps the values of two integers
 * @a: a parameter
 * @b: a parameter
*/
void swap_int(int *a, int *b)
{
	int c = *a;

	*a = *b;
	*b = c;
}
