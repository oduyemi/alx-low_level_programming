#include <stdlib.h>
#include "main.h"
#include <stdio.h>

/**
 *free_grid - frees a 2 dimensional grid
 *
 *@grid:2d grid
 *
 *@height:height dimension of grid
 *
 *Return:Nothing
 *
 */
void free_grid(int **grid, int height)
{
	int i;

	if (grid == NULL || height == 0)
	{
		return;
	}
	for (i = 0; i <  height; i++)
	{
		free(grid[i]);
	}
	free(grid);
}
