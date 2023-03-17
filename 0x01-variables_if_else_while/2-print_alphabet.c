#include<stdio.h>
/**
 * main - A program that prints the alphabet in lowercase,
 * followed by a new line
 * Return: 0 (Success)
*/
int main(void)
{
	char c = 'a';

	while (c <= 'z')
	{
		putchar(c);
		c = c + 1;
	}
	putchar('\n');
	return (0);
}
