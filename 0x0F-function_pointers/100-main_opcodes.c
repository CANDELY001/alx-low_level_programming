#include<stdio.h>
#include<stdlib.h>
/**
 * main - prints the opcodes of its own main function
 * @argc: parameter
 * @argv: parameter
 * Return: result
 */
/* BY CHARIFA MASBAHI*/
int main(int argc, char *argv[])
{
	int b, i = 0;
	char *arr;

	if (argc != 2)
	{
		printf("Error\n");
		exit(1);
	}
	b = atoi(argv[1]);

	if (b < 0)
	{
		printf("Error\n");
		exit(2);
	}
	arr = (char *)main;

	while (i < b)
	{
		if (i == b - 1)
		{
			printf("%02hhx\n", arr[i]);
			break;
		}
		printf("%02hhx", arr[i]);
		i++;
	}
	return (0);
}
