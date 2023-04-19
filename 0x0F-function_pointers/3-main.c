#include "3-calc.h"
#include <stdio.h>
#include <stdlib.h>
/**
 * main - fuction that prints the result
 * @argc: parameter
 * @argv: parameter
 * Return: result
 */
int main(int argc, char *argv[])
{
	int num1, num2, res = 0;
	char *c;

	if (argc != 4)
	{
		printf("Error\n");
		exit(98);
	}
	num1 = atoi(argv[1]);
	num2 = atoi(argv[3]);
	c = argv[2];

	if (c[1] || get_op_func(c) == NULL)
	{
		printf("Error\n");
		exit(99);
	}
	if ((num2 == 0  && *c  == '/') || (num2 == 0 && *c  == '%'))
	{
		printf("Error\n");
		exit(100);
	}
	res = get_op_func(c)(num1, num2);

	printf("%d\n", res);
	return (0);
}
