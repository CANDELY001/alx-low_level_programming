#include "main.h"
#include<stdio.h>
#include <string.h>
#include <stdlib.h>
/**
 * *str_concat - a function that concatenates two strings
 * @s1: parameter
 * @s2: parameter
 * Return: result
 */
/* BY CHARIFA MASBAHI*/
char *str_concat(char *s1, char *s2)
{
	char *s;
	int i = 0, j = 0;

	if (s1 == NULL)
		s1 = "";
	if (s2 == NULL)
		s2 = "";
	s = (char *) malloc((strlen(s1) + strlen(s2) + 1) * sizeof(char));
	if (s == NULL)
		return (NULL);

	while (i < strlen(s1))
	{
		s[i] = s1[i];
	        i++;
	}
	while (j < strlen(s2))
	{
		s[i] = s2[j];
	        j++;
	}
	s[i] = '\0';
	return (s);
}
