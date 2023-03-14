#include "main.h"
#include <stdio.h>
#include <stdlib.h>

/**
 * alloc_grid - creates 2-dimentional array grid
 * @height: length of first dimension
 * @width: length of second dimension
 *
 * Return: Pointer to newly allocated memory containing
 * 2D array.
 */

int **alloc_grid(int width, int height)
{
	int u, v;
	int **grid;

	if (width <= 0 || height <= 0)
		return (NULL);

	/* Allocate space for the number of rows(height) */
	grid = malloc(sizeof(int *) * height);

	/* If malloc fails */
	if (!grid)
		return (NULL);

	/* Allocate space for each of the inner arrays */
	for (u = 0; u < height; u++)
	{
		grid[u] = malloc(sizeof(int) * width);

		/* If malloc fails again, free any previously allocared memory */
		if (!grid[u])
		{
			for (u--; u >= 0; u--)
				free(grid[u]);
			free(grid);
			return (NULL);
		}
	}

	/* Initialize every element with zero */
	for (u = 0; u < height; u++)
		for (v = 0; v < width; v++)
			grid[u][v] = 0;

	return (grid);
}
