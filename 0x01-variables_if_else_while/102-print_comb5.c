#include<stdio.h>
/**
 * main - A program that prints all possible combinations
 * of two two-digit numbers.
 * Return: 0 (Sucess)
*/
int main(void)
{
	int a = '0', b;

	for (; a <= 98; a++)
	{
		for (b = a + 1; b <= 99; b++)
		{
			if (a != 98 && b != 99)
			{
				putchar((a / 10) + '0');
				putchar((a % 10) + '0');
				putchar(' ');
				putchar((b / 10) + '0');
				putchar((b % 10) + '0');
			}
			putchar(',');
			putchar(' ');
		}
	}
	putchar('\n');
	return (0);
}
