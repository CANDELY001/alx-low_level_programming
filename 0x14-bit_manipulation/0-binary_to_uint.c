#include "main.h"
/**
 * binary_to_uint - converts a binary number to an unsigned integer
 * @b: parameter
 * Return: results
 */
/* BY CHARIFA MASBAHI*/
unsigned int binary_to_uint(const char *b)
{
	unsigned int i = 0, res = 0;

	while (b[i] != '\0')
	{
		if (b[i] != '0' && b[i] != '1')
			return (0);
		res = (res << 1) | (b[i] - '0');
		i++;
	}
	return (res);
}
