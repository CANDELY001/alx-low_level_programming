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
		printf("%d", va_arg(ap, int));

		if (i != n - 1 && separator)
		{
			printf("%s", separator);
		}
		i++;
	}
	printf("\n");
	va_end(ap);

}

