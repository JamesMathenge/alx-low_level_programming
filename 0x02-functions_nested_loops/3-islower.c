#include "main.h"

/**
 * _islower - a function that checks for lowercase character
 *
 *@c: printed variable
 *
 * Return: 1 if lower case, 0 otherwise
 */
int _islower(int c)
{
	if (c >= 97 && c <= 122)
		return (1);
	else
		return (0);
}
