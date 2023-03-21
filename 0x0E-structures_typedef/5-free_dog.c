#include "dog.h"
#include <stdio.h>
#include <stdlib.h>

/**
 * free_dog - frees all memory allocated to a dog structure
 * @d: pointer to struct to be freed
 *
 * Return: Nothing.
 */

void free_dog(dog_t *d)
{
	if (!d)
		return;

	free(d->name);
	free(d->owner);
	free(d);
}
