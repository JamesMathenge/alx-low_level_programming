#include "main.h"
#include <stdlib.h>

/**
 * str_concat - function returns a pointer to a duplicate new string
 * @s1: string 1
 * @s2: string 2
 * Return: pointer to a duplicate new string else null
 */
char *str_concat(char *s1, char *s2)
{
	char *result;
	int len_1, len_2, y, z;

	if (s1 == NULL)
		s1 = "";
	if (s2 == NULL)
		s2 = "";

	for (len_1 = 0; s1[len_1] != '\0'; len_1++)
		;
	for (len_2 = 0; s2[len_2] != '\0'; len_2++)
		;

	result = malloc((len_1 * sizeof(*s1)) + (len_2 * sizeof(*s2)) + 1);
	if (result == NULL)
		return (NULL);
	for (y = 0, z = 0; y < (len_1 + len_2 + 1); y++)
	{
		if (y < len_1)
		result[y] = s1[y];
		else
		result[y] = s2[z++];
	}

	return (result);
}
