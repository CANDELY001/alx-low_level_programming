#include "main.h"
/**
 * _islower - a function that checks for lowercase character
 * @c: is a character that will be checked
 * Return:1 c is lowercase
*/
int _islower(int c)
{
	if (c >= 97 && c <= 122)
	{
		return (1);
	}
	return (0);
}
