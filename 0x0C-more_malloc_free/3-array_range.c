#include "main.h"
#include <stdio.h>
#include <stdlib.h>

/**
 * array_range - creates an array of integers speficied by min and max
 * @min: starting number, inclusive
 * @max: number to stop at, inclusive
 *
 * Return: Pointer to newly created array.
 */

int *array_range(int min, int max)
{
	int x, h;
	int *arr;
	int range;

	if (min > max)
		return (NULL);

	range = max - min + 1;

	arr = malloc(sizeof(int) * range);

	if (arr == NULL)
		return (NULL);

	for (x = min, h = 0; x <= max; x++, h++)
		arr[h] = x;

	return (arr);
}
