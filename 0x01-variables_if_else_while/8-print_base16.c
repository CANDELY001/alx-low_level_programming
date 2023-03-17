#include<stdio.h>
/**
 * main - A program that prints all the numbers of base 16 in lowercase,
 * followed by a new line.
 * Return: 0 (Success)
*/
int main(void)
{
	unsigned int x = '0';
	char a = 'a';

	while (x <= '9')
	{
		putchar(x);
		x = x + 1;
	}
	while (a <= 'f')
	{
		putchar(a);
		a = a + 1;
	}
	putchar('\n');
	return (0);
}
