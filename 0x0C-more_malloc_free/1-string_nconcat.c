#include "main.h"
#include <stdlib.h>

/**
 * string_nconcat - a function that concatenates two strings
 * @s1: first argument
 * @s2: second argument
 * @n: maximum number of characters to concatenate from s2
 *
 * Return: pointer to the newly allocated string
 */
char *string_nconcat(char *s1, char *s2, unsigned int n)
{
	char *result;
	unsigned int len1 = 0, len2 = 0, y = 0, z = 0;

	if (s1 == NULL)
		s1 = "";
	if (s2 == NULL)
		s2 = "";
	while (s1[len1] != '\0')
	{
		len1++;
	}
	while (s2[len2] != '\0')
	{
		len2++;
	}
	if (n >= len2)
		n = len2;
	result = (char *) malloc(sizeof(char) * (len1 + n + 1));
	if (result == NULL)
		return (NULL);
	for (y = 0; y < len1; y++)
		result[y] = s1[y];
	for (z = 0; z < n; z++)
		result[y + z] = s2[z];
	result[y + z] = '\0';

	return (result);
}
