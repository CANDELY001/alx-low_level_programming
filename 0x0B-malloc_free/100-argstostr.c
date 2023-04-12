#include "main.h"
#include <stddef.h>
#include<stdio.h>
#include <string.h>
#include <stdlib.h>
/**
 * *argstostr - concatenates all the arguments of your program
 * @ac: parameter
 * @av: parameter
 * Return: result
 */
/* BY CHARIFA MASBAHI*/

char *argstostr(int ac, char **av)
{
	char *t;
	int i = 0, j, size = 0, k = 0;

	if (ac == 0 || av == NULL)
		return (NULL);

	while (i < ac)
	{
		j = 0;
		while (av[i][j])
		{
			size++;
			j++;
		}
		size++;
		i++;
	}
	tab = (char *) malloc((size + 1) * sizeof(char));
	if (t == NULL)
		return (NULL);

	i = 0;
	while (i < ac)
	{
		j = 0;
		while (av[i][j])
		{
			t[k] = av[i][j];
			j++;
			k++;
		}
		t[k] = '\n';
		i++;
		k++;
	}
	t[k] = '\0';

	return (tab);
}
