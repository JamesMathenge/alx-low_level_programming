#include "main.h"

/**
 * _strpbrk - a function that searches a string for any of a set of bytes
 * @s: input that is searched for a matching byte in the accept string
 * @accept: input that will be that will be searched for in the s string
 *
 * Return: a pointer to the byte in s that matches one of the bytes in accept
 * or NULL if no such byte is found
 */
char *_strpbrk(char *s, char *accept)
{
	int y = 0;
	int z = 0;

	for (y = 0; s[y] != '\0'; y++)
	{
		for (z = 0; accept[z] != '\0'; z++)
		{
			if (s[y] == accept[z])
			{
				return (&s[y]);
			}
		}
	}
	return ('\0');
}
