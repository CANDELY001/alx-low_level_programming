#include "variadic_functions.h"
#include<stdio.h>
/**
 * print_numbers - prints numbers, followed by a new line
 * @separator: parameter
 * @n: parameter
 * @...: parameter
 * Return: void
 */
/* BY CHARIFA MASBAHI*/
void print_numbers(const char *separator, const unsigned int n, ...)
{
	va_list ap;
	unsigned int i = 0;



	va_start(ap, n);
	while (i < n)
	{
		if (i == n - 1)
		{
			printf("%d\n", va_arg(ap, int));
		} else if (separator && i != n - 1)
		{
			printf("%d%s", va_arg(ap, int), separator);
		} else
		{
			printf("%d ", va_arg(ap, int));
		}
		i++;
	}
	va_end(ap);

}

