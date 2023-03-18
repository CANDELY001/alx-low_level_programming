#include<stdio.h>
/**
 * main - A program that prints all possible different
 * program that prints all possible different
 * Return: 0 (Success)
*/
int main(void)
{
	int x = '0';
	int y;

	for (; x <= 9; x++)
	{
		for (y = x; y <= 9; y++)
		{
			putchar(x);
			putchar(y);
		}
		putchar(',');
		putchar(' ');
	}
	putchar('\n');
	return (0);
}
