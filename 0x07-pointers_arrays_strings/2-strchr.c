#include "main.h"

/**
 * _strchr - a function that locates a character in a string
 * @s: pointer to a character array s
 * @c: character c that will be checked
 *
 * Return: Always 0 (Success)
 */
char *_strchr(char *s, char c)
{
	while (*s != '\0')
	{
		if (*s == c)
		{
			return (s);
		}
		s++;
	}
	return (0);
}
