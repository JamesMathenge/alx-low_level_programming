#include "main.h"
#include <stdlib.h>

/**
 * array_range - function that creates an array of integers
 * @min: minimum value.
 * @max: maximum value.
 *
 * Return: the pointer to the newly created array
 *         If min > max, return NULL
 *         If malloc fails, return NULL
 */
int *array_range(int min, int max)
{
	int *ptr;
	int num_items = 0;
	int z = 0;

	if (min > max)
		return (NULL);

	num_items = max - min + 1;

	ptr = malloc(num_items * sizeof(int));

	if (ptr == NULL)
		return (NULL);

	while (z < num_items)
	{
		*(ptr + z) = min + z;
		z++;
	}

	return (ptr);
}
