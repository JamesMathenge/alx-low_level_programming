#include "main.h"
#include <stdlib.h>

/**
 * *create_array - creates array of chars initialized with specific char
 * @size: size of the array created
 * @c: char representing the array
 *
 * Return: pointer to a char else NULL if size = 0
 */
char *create_array(unsigned int size, char c)
{
	unsigned int z = 0;
	char *char_array;

	if (size == 0)
		return (NULL);

	char_array = (char *) malloc(sizeof(char) * size);

	if (char_array == NULL)
		return (0);

	while (z < size)
	{
		char_array[z] = c;
		z++;
	}
	char_array[z] = '\0';


	return (char_array);
}
