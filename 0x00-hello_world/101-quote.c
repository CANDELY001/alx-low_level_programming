# include<stdio.h>
# include<unistd.h>
/**
 * main - A program that prints the lines with write function
 * Return: 0 (Success)
*/
int main(void)
{
char *message = "and that piece of art is useful\" - Dora Korpar, 2015-10-19\n";
write(1, message, 59);
return (1);
}
