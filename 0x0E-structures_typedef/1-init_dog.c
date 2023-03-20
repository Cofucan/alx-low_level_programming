#include "dog.h"
#include <stdio.h>
#include <stdlib.h>

/**
 * init_dog - initilizes a variable of type {struct dog}
 * @d: variable to be initialized
 * @name: name of dog
 * @age: age of dog
 * @owner: owner of dog
 *
 * Return: Nothing.
 */

void init_dog(struct dog *d, char *name, float age, char *owner)
{
	if (d == NULL)
		d = malloc(sizeof(struct dog));

	(*d).name = name;
	(*d).age = age;
	(*d).owner = owner;
}
