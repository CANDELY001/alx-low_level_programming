#include "variadic_functions.h"
#include<stdarg.h>
/**
 * sum_them_all - returns the sum of all its parameters
 * @n: count of parameter
 * @...: parameters
 * Return: result
 */
/* BY CHARIF MASBAHI*/
int sum_them_all(const unsigned int n, ...)
{
	va_list ap;
	int i = 0, sum = 0;

	if (!n)
	{
		return (0);
	}
	va_start(ap, n);

	while (i < n)
	{
		sum += va_arg(ap, int);
		i++;
	}
	va_end(ap);
	return (sum);
}
