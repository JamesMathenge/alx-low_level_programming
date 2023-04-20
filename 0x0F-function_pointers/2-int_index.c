#include "function_pointers.h"

/**
 * int_index - function that searches for an integer.
 * @array: array
 * @size: size of elements in array
 * @cmp: pointer
 *
 * Return: If no element matches, return -1
 * If size <= 0, return -1
 * int_index returns the index of the first element
 */
int int_index(int *array, int size, int (*cmp)(int))
{
	int z = 0;

	if (array == NULL || cmp == NULL || size <= 0)
	{
		return (-1);
	}
	
	while (z < size)
	{
		if (cmp(array[z]) != 0)
		{
			return (z);
		}
		z++;
	}
	return (-1);
}
