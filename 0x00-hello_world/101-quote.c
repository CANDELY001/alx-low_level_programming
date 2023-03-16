# include<stdio.h>
# include<unistd.h>
/**
 * main - A program that prints the lines with write function
 * Return: 1 (Success)
*/
int main(void)
{
char *message = "and that piece of art is useful\" - Dora Korpar, 2015-10-19\n";
write(1, message, 58);
return (1);
}
