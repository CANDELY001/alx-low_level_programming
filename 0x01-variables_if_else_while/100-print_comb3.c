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

	for (; x <= '8'; x++)
	{
		for (y = x; y <= '9'; y++)
		{
			if (x < y)
			{
				putchar(x);
				putchar(y);
				if (x == '8' && y == '9')
				{
					putchar('\n');
				} else
				{
					putchar(',');
					putchar(' ');
				}
			}
		}
	}
	return (0);
}
