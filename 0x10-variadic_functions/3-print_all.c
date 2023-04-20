#include "variadic_functions.h"
#include<stdio.h>
/**
 * print_all - function that prints anything
 * @format: format
 * @...: parameters
 * Return: result
 */
/* BY CHARIFA MASBAHI*/
void print_all(const char * const format, ...)
{
	va_list ap;
	int i = 0;
	char c_ap;
	int i_ap;
	float f_ap;
	char *s_ap;

	va_start(ap, format);
	while (format[i])
	{
		switch (format[i])
		{
			case 'c':
				c_ap = va_arg(ap, int);
				printf("%c", c_ap);
				break;
			case 'i':
				i_ap = va_arg(ap, int);
				printf("%d", i_ap);
				break;
			case 'f':
				f_ap = va_arg(ap, double);
				printf("%f", f_ap);
				break;
			case 's':
				s_ap = va_arg(ap, char *);
				if (s_ap == NULL)
					printf("(nil)");
				else
					printf("%s", s_ap);
				break;
			default:
				i++;
				continue;
		}

		if (format[i + 1] != '\0')
		{
			printf(", ");
		}
		i++;
	}
	printf("\n");
	va_end(ap);
}
