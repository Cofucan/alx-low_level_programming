#include "main.h"
#include <stdio.h>
#include <stdlib.h>

/**
 * free_grid - frees memory allocated to a 2-dimentional array grid
 * @grid: 2D array to be freed
 * @height: number of rows in the array
 *
 * Return: Nothing.
 */

void free_grid(int **grid, int height)
{
	int x;

	for (x = 0; x < height; x++)
		free(grid[x]);

	free(grid);
}
