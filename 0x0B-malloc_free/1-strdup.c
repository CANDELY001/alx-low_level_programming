#include "main.h"
#include<stdio.h>
#include <stdlib.h>
#include <stdlib.h>
#include <string.h>
#include <stddef.h>
/**
 * *_strdup -  function that returns a pointer to a newly allocated in memory
 * @str: parameter
 * Return: result
 */
/* BY CHARIFA MASBAHI*/
char *_strdup(char *str)
{
	char *s;
	int i = 0;

	if (str == NULL)
	{
		return (NULL);
	}
	s = (char *) malloc((strlen(str) + 1) * sizeof(char));
	if (s == NULL)
	{
		return (NULL);
	}
	while ((s[i] = str[i]) != '\0')
	{
		i++;
	}
	return (s);
}
