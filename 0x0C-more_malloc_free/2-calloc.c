#include "main.h"
#include <stdio.h>
#include <stdlib.h>

/**
 * _calloc - allocates memory for an array, just like the real calloc
 * @nmemb: number of elements in array
 * @size: byte size of each array element
 *
 * Return: Pointer to newly allocated memory.

 */

void *_calloc(unsigned int nmemb, unsigned int size)
{
	unsigned int u = 0;
	void *mem; /* Pointer for new memory allocation */
	char *cast;

	/* If either argument is 0 */
	if (nmemb == 0 || size == 0)
		return (NULL);

	/* Check for integer overflow */
	if ((nmemb * size) < nmemb || (nmemb * size) < size)
		return (NULL);

	/* Allocate memory and return null if malloc fails */
	mem = malloc(nmemb * size);
	if (mem == NULL)
		return (NULL);

	/* Cast void pointer to char pointer so we can set bytes to 0 */
	cast = mem;

	/* Set all bytes to 0 */
	for (u = 0; u < (nmemb * size); u++)
		cast[u] = 0;

	/* Return the void pointer but now the values have been set to 0 */
	return (mem);
}
