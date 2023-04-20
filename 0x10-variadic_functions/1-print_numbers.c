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

	if (separator)
	{
		va_start(ap, n);
		while (i < n)
		{
			if (i == n - 1)
			{
				printf("%d\n", va_arg(ap, int));
			} else
			{
				printf("%d%s", va_arg(ap, int), separator);
			}
			i++;
		}
		va_end(ap);
	}
}

