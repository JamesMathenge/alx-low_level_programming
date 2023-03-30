#include "main.h"

/**
 * string_toupper - a function that changes all lowercase letters to uppercase
 * @a: pointer
 *
 * Return: a
 */
char *string_toupper(char *a)
{
	int z;

	z = 0;
	while (a[z] != '\0')
	{
		if (a[z] >= 'a' && a[z] <= 'z')
		a[z] = a[z] - 32;
		z++;
	}
	return (a);
}
