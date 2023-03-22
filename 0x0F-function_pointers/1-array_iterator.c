#include <stdlib.h>
#include <stdio.h>
#include "function_pointers.h"

/**
 * array_iterator - Executes a function on all elements of an array
 * @array: Array to be processed
 * @size: Number of elements in the array
 * @action: Pointer to function which will be applied on the array elements
 *
 * Return: Nothing.
 */

void array_iterator(int *array, size_t size, void (*action)(int))
{
	size_t r;

	if (!array || !action || (size < 1))
		return;

	for (r = 0; r < size; r++)
		action(array[r]);
}
