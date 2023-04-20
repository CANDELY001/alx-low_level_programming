#include<stdarg.h>
#include <stdio.h>
/**
 * print_strings - function that prints strings, followed by a new line
 * @separator: parameter
 * @n: parameter
 * @..: parameters
 * Return: result
 */
void print_strings(const char *separator, const unsigned int n, ...)
{
	va_list ap;
	unsigned int i = 0;


	va_start(ap, n);
	while (i < n)
	{
		char *str = va_arg(ap, char *);

		printf("%s", (!str) ? ("(nil)") : str);

		if (i < n - 1 && separator)
		{
			printf("%s", separator);
		}
		i++;
	}
	printf("\n");
	va_end(ap);

}
