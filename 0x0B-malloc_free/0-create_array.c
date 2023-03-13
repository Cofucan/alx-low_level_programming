#include "main.h"
#include <stdio.h>
#include <stdlib.h>

/**
 * create_array - initializes an array of chars
 * @size: size of array to create
 * @c: char to initialize array with
 *
 * Return: Pointer to array.
 */

char *create_array(unsigned int size, char c)
{
	unsigned int u;
	char *arr;

	/* If size is zero */
	if (!size)
		return (NULL);

	arr = malloc(sizeof(char) * size);

	/* If allocation fails */
	if (!arr)
		return (NULL);

	/* Replace all characters, including the null terminator */
	for (u = 0; u < size; u++)
		arr[u] = c;

	return (arr);
}
