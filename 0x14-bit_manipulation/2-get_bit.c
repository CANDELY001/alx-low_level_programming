#include "main.h"
/**
 * get_bit - returns the value of a bit at a given index
 * @n: parameter
 * @index: parameter
 * Return: result
 */
/* BY CHARIFA MASBAHI*/
int get_bit(unsigned long int n, unsigned int index)
{
	if (index > 63)
		return (-1);
	return ((n >> index) & 1);
}
