#include "main.h"
/**
 * flip_bits - eturns the number of bits you would need to flip to get from..
 * @n: parameter
 * @m: parameter
 * Return: result
 */
/* BY CHARIF AMASBAHI*/
unsigned int flip_bits(unsigned long int n, unsigned long int m)
{
	unsigned long int number = n ^ m;
	unsigned int c = 0;

	while (number)
	{
		c += number & 1;
		number >>= 1;
	}
	return (c);
}
