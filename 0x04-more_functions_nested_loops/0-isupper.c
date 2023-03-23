#include "main.h"
/**
 * _isupper - a function that checks for uppercase character
 * @c: is a character that will be checked
 * Return:1 c is lowercase
*/
int _isupper(int c)
{
	if (c >= 65 && c <= 90)
	{
		return (1);
	}
	return (0);
}
