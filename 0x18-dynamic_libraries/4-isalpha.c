#include "main.h"

/**
 * _isalpha - a function that checks for alphabetic character
 *
 *@c: printed variable
 *
 * Return: 1 if a letter, 0 otherwise
 */
int _isalpha(int c)
{
	if ((c >= 97 && c <= 122) || (c >= 65 && c <= 90))
		return (1);
	else
		return (0);
}
