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
	int num1, num2;

	if (argc != 4)
	{
		printf("Error\n");
		exit(98);
	}
	num1 = atoi(argv[1]);
	num2 = atoi(argv[3]);
	if (get_op_func(argv[2]) == NULL || argv[2][1] != '\0')
	{
		printf("Error\n");
		exit(98);
	}
	if (!num2)
	{
		printf("Error\n");
		exit(98);
	}
	printf("%d\n", get_op_func(argv[1])(num1, num2));
	return (0);
}
