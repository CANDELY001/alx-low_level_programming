#include<stdio.h>
/**
 * main - A program that prints the lowercase alphabet in reverse,
 * followed by a new line.
 * Return: 0 (Success)
*/
int main(void)
{
	char a = 'z';

	while (a >= 'a')
	{
		putchar(a);
		a = a - 1;
	}
	putchar('\n');
	return (0);
}
