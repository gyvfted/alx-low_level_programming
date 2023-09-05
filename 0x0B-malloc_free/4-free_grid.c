#include <stdio.h>
#include <stdlib.h>
#include "main.h"
/**
 * free_grid - Frees 2d grid
 * @grid: The 2d grid
 * @height: The height dimension of grid
 **/

void free_grid(int **grid, int height)
{
	int i;

	for (i = 0; i < height; i++)
	{
		free(grid[i]);
	}
	free(grid);
}
