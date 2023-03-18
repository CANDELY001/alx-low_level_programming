#include<stdio.h>
/**
 * main - A program that prints all possible different
 * combinations of three digits.
 * Return: 0 (Success)
*/
int main(void)
{
        int x = '0';
        int y, z;

        for (; x <= '8'; x++)
        {
                for (y = x; y <= '8'; y++)
                {
			for (z = y; z <= '9'; z++)
			{
				if (x < y)
				{
					putchar(x);
					putchar(y);
					putchar(z);
					if (x == '7' && y == '8' && z == '9')
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
        }
        return (0);
}
