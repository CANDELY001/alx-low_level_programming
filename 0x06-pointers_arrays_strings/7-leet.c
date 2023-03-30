#include "main.h"
/**
 * *leet - a function that encodes a string into 1337.
 * @s: a parameter
 * Return: result
 */
char *leet(char *s)
{
	int i, j;
	char *x = "aAeEoOtTlL";
	char *y = "4433007711";

	for (i = 0; s[i] != '\0'; i++)
	{
		for (j = 0; j < 10; j++)
		{
			if (s[i] == x[j])
			{
				s[i] = y[j];
			}

		}
	}
	return (s);
}
