#include "function_pointers.h"
#include <stddef.h>
/**
 * int_index - function that searches for an integer
 * @array: parameter
 * @size: paremeter
 * @cmp: pointer of funtion
 * Return: result
 */
/* BY CHARIFA MASBAHI*/
int int_index(int *array, int size, int (*cmp)(int))
{
	int check, i = 0;

	if (!size)
	{
		return (-1);
	}
	while (i < size)
	{
		check = cmp(*(array + i));
		
		if (check != 0)
		{
			return (i);
			break;
		}
		i++;
	}
	return (-1);
}
