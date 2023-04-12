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
	int y, z, len_1, len_2 = 0;

	if (s1 == NULL)
		s1 = "";
	if (s2 == NULL)
		s2 = "";

	while (s1[len_1] != '\0')
		len_1++;
	while (s2[len_2] != '\0')
		len_1++;

	result = malloc((len_1 * sizeof(char)) + (len_2 * sizeof(char)) + 1);

	while (y < len_1)
	{
		result[y] = s1[y];
		y++;
	}
	while (z < len_2)
	{
		result[y] = s2[z];
		y++;
		z++;
	}
	result[y] = '\0';

	return (result);
}
