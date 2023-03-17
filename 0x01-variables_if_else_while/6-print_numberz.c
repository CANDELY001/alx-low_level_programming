#include<stdio.h>
/**
 * main - A program that prints all single digit numbers of base 10
 * starting from 0, followed by a new line.
 * Return: 0 (Success)
*/
int main(void)
{
	unsigned int x = '0';

	while (x <= '9')
	{
		putchar(x);
		x = x + 1;
	}
	putchar('\n');
	return (0);
}
