#include "main.h"
#include <stddef.h>
#include<stdio.h>
#include <string.h>
#include <stdlib.h>
int word(char *s);
/**
 * **strtow - function that splits a string into words
 * @str: parameter
 * Return: result
 */
/* BY CHARIFA MASBAHI*/
char **strtow(char *str)
{
	char **twodim, *onedim;
	int len = 0, words, i, k = 0, j = 0, start, end;


	while (*(str + len))
		len++;

	words = word(str);
	if (words == 0)
		return (NULL);

	twodim = (char **) malloc((words + 1) * sizeof(char *));

	if (twodim == NULL)
		return (NULL);

	for (i = 0; i <= len; i++)
	{
		if (str[i] == ' ' || str[i] == '\0')
		{
			if (j)
			{
				end = i;
				onedim = (char *) malloc((j + 1) * sizeof(char));
				if (onedim == NULL)
					return (NULL);

				while (start < end)
					*onedim++ = str[start++];

				*onedim = '\0';
				twodim[k] = onedim - j;
				k++;
				j = 0;
			}
		}
		else if (j++ == 0)
			start = i;
	}
	twodim[k] = NULL;
	return (twodim);

}
/**
 * word - entry pint
 * @s: parameter
 * Return: result
 */
int word(char *s)
{
	int w = 0, i, flag = 0;

	for (i = 0; s[i] != '\0'; i++)
	{
		if (s[i] == ' ')
			flag = 0;
		else if (flag == 0)
		{
			flag = 1;
			w++;
		}
	}

	return (w);
}
