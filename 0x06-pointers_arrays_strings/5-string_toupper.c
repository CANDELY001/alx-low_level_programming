#include "main.h"
/**
 * *string_toupper - a function that changes all lowercase
 * @str: parameter
 * Return: result
 */
char *string_toupper(char *str)
{
	int i = 0;

	for (; str[i] != '\0'; i++)
	{
		if (str[i] >= 'a' && str[i] <= 'z')
		{
			str[i] = str[i] - 32;
		}
	}
	return (str);
}
