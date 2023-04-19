#include "function_pointers.h"
#include <stdlib.h>

/**
 * array_iterator - a function that executes a function given
 * as a parameter on each element of an array
 * @array: array
 * @size: size
 * @action: pointer
 */
void array_iterator(int *array, size_t size, void (*action)(int))
{
	size_t z = 0;

	if (array == NULL || action == NULL)
	{
		return;
	}

	while (z < size)
	{
		action(array[z]);
		z++;
	}
}
