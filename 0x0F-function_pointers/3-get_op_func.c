#include "3-calc.h"
/**
 * get_op_func - function that select the operating function
 * @s: parameter
 * Return: result
 */
/* BY CHARIFA MASBAHI*/
int (*get_op_func(char *s))(int a, int b)
{
	op_t ops[] = {
		{"+", op_add},
		{"-", op_sub},
		{"*", op_mul},
		{"/", op_div},
		{"%", op_mod},
		{NULL, NULL}
	};
	int i;

	while (i < 6)
	{
		if (ops[i].op  == s || ops[i].op != NULL)
		{
			return (ops[i].f);
		}
		i++;
	}
	return (NULL);
}
