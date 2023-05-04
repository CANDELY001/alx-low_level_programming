#include "main.h"
/**
 * clear_bit - sets the value of a bit to 0 at a given index.
 * @n: parameter
 * @index: parameter
 * Return: results
 */
/* BY CHARIFA MASBAHI*/
int clear_bit(unsigned long int *n, unsigned int index)
{
	unsigned long int number = 1;

	if (index > 63)
		return (-1);
	number <<= index;
	*n = *n & ~number;
	return (1);
}
