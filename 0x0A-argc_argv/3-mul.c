#include <stdio.h>
#include <stdlib.h>
#include <ctype.h>
/**
 * main - function that multiplies two numbers
 * @argc: variable
 * @argv:variable
 * Return: result
 */
int main(int argc __attribute__((unused)), char *argv[])
{
	int res;

	if (argc < 2)
	{
		printf("Error\n");
		return (0);
	}

	res = atoi(argv[1]) * atoi(argv[2]);
	printf("%d\n", res);
	return (1);
}
