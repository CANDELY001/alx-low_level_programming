#include <stdio.h>
#include <stdlib.h>

/**
 * main - function a program that prints its name, followed by a new line
 * @argc: variable
 * @argv:variable
 * Return: result
 */
int main(int argc __attribute__((unused)), char *argv[])
{
	printf("%s\n", argv[0]);
	return (0);
}
