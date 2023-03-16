#include "main.h"
#include <stdio.h>
#include <stdlib.h>

/**
 * malloc_checked - allocates memory using malloc
 * @b: number of bytes to be allocated
 *
 * Return: Pointer to newly allocated memory or
 * exits program with exit status of 98 if malloc fails.
 */

void *malloc_checked(unsigned int b)
{
	void *mem = malloc(b);

	if (!mem)
		exit(98);

	return (mem);
}
