#include "main.h"
#include <stdlib.h>

/**
 * alloc_grid - function returning pointer to a 2D array of integers
 * @width: width
 * @height: height
 *
 * Return: pointer to the newly created 2D grid of integers
 * else NULL
 */
int **alloc_grid(int width, int height)
{
	int **array_2d;
	int row = 0, col = 0;

	if (width + height < 2 || width < 1 || height < 1)
		return (NULL);

	array_2d = malloc(height * sizeof(*array_2d));
	if (array_2d == NULL)
		return (NULL);

	while (row < height)
	{
		array_2d[row] = malloc(width * sizeof(**array_2d));
		if (array_2d[row] == NULL)
		{
			while (row >= 0)
			{
				free(array_2d[row]);
				row--;
			}
			free(array_2d);
			return (NULL);
		}
		col = 0;
		while (col < width)
		{
			array_2d[row][col] = 0;
			col++;
		}
		row++;
	}

	return (array_2d);
}

