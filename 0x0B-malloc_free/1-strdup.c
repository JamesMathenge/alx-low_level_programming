#include "main.h"
#include <stdlib.h>

/**
 * _strdup - function returns a pointer to a newly allocated space in memory
 * @str: pointer to a char string
 * Return: Pointer to duplicated string
 * else NULL if it fails to allocate memory
 */
char *_strdup(char *str)
{
	char *duplicate_str;
	int z = 0;
	int str_length = 0;

	if (str == NULL)
		return (NULL);

	while (str[str_length] != '\0')
	{
		str_length++;
	}

	duplicate_str = malloc(str_length * sizeof(char) + 1);
	if (duplicate_str == NULL)
		return (NULL);

	while (z < str_length)
	{
		duplicate_str[z] = str[z];
		z++;
	}
	duplicate_str[z] = '\0';

	return (duplicate_str);
}
