#include<stdarg.h>
#include <stdio.h>
void print_strings(const char *separator, const unsigned int n, ...)
{
	va_list ap;
	unsigned int i = 0;

	if (*separator)
	{
		va_start(ap, n);
		while (i < n)
		{
			char *str = va_arg(ap, char *);
			
			printf("%s", (!str) ? ("(nil)") : str);

			if (i < n - 1)
			{
				printf("%s", separator);
			}
			else
			{
				printf("\n");
			}
			i++;
		}
		va_end(ap);
	}
}
