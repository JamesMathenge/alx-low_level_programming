#include "main.h"
/**
 * _strcmp - a function that compares two strings
 * should also work exactly like strcmp
 * @s1: input value
 * @s2: input value
 *
 * Return: Always 0 (Success)
 */
int _strcmp(char *s1, char *s2)
{
	int a;

	a = 0;
	while (s1[a] != '\0' && s2[a] != '\0')
	{
		if (s1[a] != s2[a])
		{
			return (s1[a] - s2[a]);
		}
		a++;
	}
	return (0);
}
