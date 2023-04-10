#include <stdio.h>
#include <stdlib.h>

/**
 * main - function that prints the number of arguments passed into it
 * @argc: variable
 * @argv:variable
 * Return: result
 */
int main(int argc, char *argv[] __attribute__((unused)))
{
        printf("%d\n", argc - 1);
        return (0);
}
