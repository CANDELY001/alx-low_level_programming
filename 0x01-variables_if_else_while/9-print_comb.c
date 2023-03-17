#include<stdio.h>
/**
 * main - A program that prints all possible combinations of single-digit numbers.
 * Return: 0 (Success)
*/
int main(void)
{
	int a,b;

	for(a = 0; a < 9; a++)
	{
		for(b = a + 1; b <= 9; b++)
		{
			if(a != b)
			{
				putchar(a);
				putchar(b);
				if (b == 9 && a == 8)
				{
					continue;
					putchar(',');
					putchar(' ');
				}
			}
		}
	}
	return (0);
}
	
