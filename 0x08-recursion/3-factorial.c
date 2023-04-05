#include "main.h"
/**
 * factorial - a function that returns the factorial of a given number
 * @n: parameter
 * Return: result
 */
int factorial(int n)
{
	if (n > 0)
	{
		return (n * factorial(n - 1));
	} else if (n < 0)
	{
		return (0);
	} else
	{
		return (-1);
	}

}
