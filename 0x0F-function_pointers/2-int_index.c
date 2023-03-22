#include <stdlib.h>
#include <stdio.h>
#include "function_pointers.h"

/**
 * int_index - FInds a number in an array
 * @array: Array to be searched
 * @size: Number of elements in the array
 * @cmp: Pointer to function which will be used to compare values
 *
 * Return: Index of first occurence of number, or -1 if not found.
 */

int int_index(int *array, int size, int (*cmp)(int))
{
	int r;

	if (!array || !cmp || (size <= 0))
		return (-1);

	for (r = 0; r < size; r++)
		if (cmp(array[r]))
			return (r);

	return (-1);
}
