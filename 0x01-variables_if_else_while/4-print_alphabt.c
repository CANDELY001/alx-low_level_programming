#include<stdio.h>
/**
 * main - A program that prints the alphabet in lowercase,
 * followed by a new line.
 * Return: 0 (Success)
*/
int main(void)
{
	char a = 'a';

	while (a <= 'z')
	{
		if (a == 'q' || a == 'e')
		{
			a = a + 1;
		}
		putchar(a);
		a = a + 1;
	}
	putchar('\n');
	return (0);
}
