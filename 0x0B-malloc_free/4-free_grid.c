#include <stdio.h>
#include <stdlib.h>
#include "main.h"

/**
 * free_grid - frees a 2D grid
 * @grid: the 2D grid to be freed
 * @height: height dimension of the grid
 *
 * Description: This function frees the memory of a 2D grid.
 */
void free_grid(int **grid, int height)
{
	int i;

	for (i = 0; i < height; i++)
	{
		free(grid[i]);
	}
	free(grid);
}
