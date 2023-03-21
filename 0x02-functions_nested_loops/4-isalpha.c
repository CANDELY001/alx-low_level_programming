#include "main.h"
/**
 * _isalpha - a function that checks for alphabetic character
 * @c: is character that will be checked
 * Return: 1 is alphabetic
*/
int _isalpha(int c)
{
	if ((c >= 97 && c <= 122) || (c >= 65 && c <= 90))
	{
		return (1);
	}
	return (0);
}
