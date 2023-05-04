#include "main.h"
/**
 * get_endianness - checks the endianness
 * Return: result
 */
/* BY CHARIFA MASBAHI*/
int get_endianness(void)
{
	unsigned int i = 1;
	char *s = (char *) &i;

	return ((int)*s);
}
