#include "main.h"
/**
 * *leet - a function that encodes a string into 1337.
 * @s: a parameter
 * Return: result
 */
char *leet(char *s)
{
	int i = 0, j = 0;
	char *x = "aAeEoOtTlL";
	char *y = "4433007711";

	for (; s[i] != '\0'; i++)
	{
		for (; j < 10; j++)
		{
			if (s[i] == x[j])
			{
				s[i] = y[j];
			}

		}
	}
	return (s);
}
