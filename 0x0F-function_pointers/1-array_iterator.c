#include "function_pointers.h"
#include <stddef.h>
#include <stdlib.h>
/**
 * array_iterator - funtion that executes a function given as a parameter on all ele in arr
 * @array: parameter
 * @size: parameter
 * @action: pointer of funtion
 * Return: void
 */
/* BY CHARIFA MASBAHI*/
void array_iterator(int *array, size_t size, void (*action)(int))
{
	long unsigned int i = 0;

	while (i < size)
	{
		action(array[i]);
		i++;
	}
}
