#include "main.h"
/**
 * wildcmp - a function that compares two strings and returns
 * 1 if the strings can be considered identical, otherwise return 0
 * @s1: parameter
 * @s2: paremetr
 * Return: result
 */
int wildcmp(char *s1, char *s2)
{
	if (*s1 == '\0' && *s2 == '\0')
	{
		return (1);
	}
	if (*s2 == '*')
	{
		if (wildcmp(s1, s2 + 1) || (*s1 != '\0' && wildcmp(s1 + 1, s2)))
		{
			return (1);
		}
	}
	if (*s1 != '\0' && (*s1 == *s2))
	{
		return wildcmp(s1 + 1, s2 + 1);
	}
	return (0);
}