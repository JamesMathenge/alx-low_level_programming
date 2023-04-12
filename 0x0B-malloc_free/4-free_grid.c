#include "main.h"
#include <stdlib.h>

/**
 * free_grid - function that frees a 2 dimensional grid
 * @grid: represents the 2D grid to be freed
 * @height: height of grid
 */

void free_grid(int **grid, int height)
{
	int z = 0;

	while (z < height)
	{
		free(grid[z]);
		z++;
	}
	free(grid);
}
