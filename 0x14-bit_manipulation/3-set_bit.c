#include "main.h"
/**
 * set_bit -  sets the value of a bit to 1 at a given index.
 * @n: parameter
 * @index: parameter
 * Return: result
 */
/* BY CHARIFA MASBAHI*/
int set_bit(unsigned long int *n, unsigned int index)
{
	unsigned long int number = 1;

	if (index > 63)
		return (-1);
	number <<= index;
	*n = *n | number;
	return (1);
}
