#include<stdio.h>
/**
 * main - rogram that prints the alphabet in lowercase, and then in uppercase,
 * followed by a new line
 * Return: 0 (Success)
*/
int main(void)
{
	char a = 'a';
	char A = 'A';

	while (a <= 'z')
	{
		putchar(a);
		a = a + 1;
	}
	while (A <= 'Z')
	{
		putchar(A);
		A = A + 1;
	}
	putchar('\n');
	return (0);
}
