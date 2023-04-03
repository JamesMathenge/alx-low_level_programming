#include "main.h"

/**
 * _strspn - a function that gets the length of a prefix substring
 * @s: represents the string to be searched
 * @accept: represents the set of characters to be matched
 *
 * Return: the length of a prefix substring
 */
unsigned int _strspn(char *s, char *accept)
{
	int length = 0;

	int y, z;

	for (y = 0; s[y] != '\0'; y++)
	{
		for (z = 0; accept[z] != '\0'; z++)
		{
			if (s[y] == accept[z])
			{
				length++;
				break;
			}
		}
		if (accept[z] == '\0')
		{
			return (length);
		}
	}
	return (length);
}
