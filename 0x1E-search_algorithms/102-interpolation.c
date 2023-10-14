#include "search_algos.h"

/**
 * custom_interpolation_search - searches for a value in a sorted array
 * @arr: pointer to the first element of the array
 * @arr_size: the number of elements in the array
 * @target: the value to search for
 * Return: first index where the value is located
 */

int custom_interpolation_search(int *arr, size_t arr_size, int target)
{
	size_t left, right, position;

	if (arr == NULL)
		return (-1);

	for (left = 0, right = arr_size - 1; right >= left;)
	{
		position = left + (((double)(right - left) / (arr[right] - arr[left]))
			* (target - arr[left]));

	if (position < arr_size)
		printf("Value checked arr[%ld] = [%d]\n", position, arr[position]);
	else
	{
		printf("Value checked arr[%ld] is out of range\n", position);
		break;
	}

	if (arr[position] == target)
		return (position);
	if (arr[position] > target)
		right = position - 1;
	else
		left = position + 1;
	}

	return (-1);
}
