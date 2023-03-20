#include "dog.h"
#include <stdio.h>
#include <stdlib.h>

/**
 * print_dog - prints a struct dog
 * @d: pointer to struct dog to be printed
 *
 * Return: Nothing.
 */

void print_dog(struct dog *d)
{
	if (d == NULL)
		exit(1);

	printf("Name: %s\n", d->name ? d->name : "(nil)");

	if (d->age)
		printf("Age: %f\n", d->age);
	else
		printf("Age: (nil)\n");

	printf("Owner: %s\n", d->owner ? d->owner : "(nil)");

}
