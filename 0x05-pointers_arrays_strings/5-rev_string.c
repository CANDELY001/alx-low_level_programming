#include "main.h"
/**
 * rev_string - a function that reverses a string
 * @s: a parameter
*/
void rev_string(char *s)
{
	int i, len, sp;
	char c;

	i = 0;
	while (s[i] != '\0')
	{
		i++;
	}
	len = i - 1;
	for (sp = 0; sp < len / 2; i++)
	{
		c = s[sp];
		s[sp] = s[len];
		s[len--] = c;
	}
}
