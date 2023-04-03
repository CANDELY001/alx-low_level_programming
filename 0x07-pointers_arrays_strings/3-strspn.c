#include "main.h"
/**
 * _strspn - a function that gets the length of a prefix substring
 * @s: parameter
 * @accept: parameter
 * Return: result
 */
unsigned int _strspn(char *s, char *accept)
{
	int n = 0;
	char *p1 = s;
	char *p2 = accept;

	while (*p1 != '\0')
	{
		while (*p2 != '\0')
		{
			if (*p1 == *p2)
			{
				n++;
			}
			p2++;
		}
		if (*p2 == '\0')
			return (n);

		p1++;
	}
	return (n);
}
