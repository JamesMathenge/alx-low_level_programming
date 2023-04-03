#include "main.h"

/**
 * _strchr - a function that locates a character in a string
 * @s: pointer to a character array s
 * @c: character c that will be checked
 *
 * Return: a pointer to a character
 * points to the first occurrence of the character c in the string s
 * or NULL if the character is not found in the string
 */
char *_strchr(char *s, char c)
{
	while (*s >= '\0')
	{
		if (*s == c)
		{
		return (s);
		}
		s++;
	}
	return ('\0');
}
