#include "main.h"
/**
 * positive_or_negative - A function
 * @n: parameter
 */
void postitive_or_negative(int n)
{
	if (n > 0)
	{
		printf("%d is positive\n", n);
	} else if (n == 0)
	{
		printf("%d is zero\n", n);
	} else
	{
		printf("%d is negative\n", n);
	}
}
