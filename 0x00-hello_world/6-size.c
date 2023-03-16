# include<stdio.h>
/**
 * main - A program that print the lines with printf function
 * Return: 0 (Success)
*/
int main(void)
{
char cha;
int i;
float f;
long long int dl;
long int d;
printf("Size of a char: %lu bytes(s).\n", (unsigned long)sizeof(cha));
printf("Size of an int: %lu bytes(s).\n", (unsigned long)sizeof(i));
printf("Size of a long int: %lu bytes(s).\n", (unsigned long)sizeof(d));
printf("Size of a long long int: %lu bytes(s).\n", (unsigned long)sizeof(dl));
printf("Size of a float: %lu bytes(s).\n", (unsigned long) sizeof(f));
return (0);
}
