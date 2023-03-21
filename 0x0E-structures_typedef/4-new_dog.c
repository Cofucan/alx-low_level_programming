#include "dog.h"
#include <stdio.h>
#include <stdlib.h>

int len(char *str);
void copy(char *dest, char *src);

/**
 * new_dog - creates a new dog structure
 * @name: name of new dog
 * @age: age of new dog
 * @owner: owner of new dog
 *
 * Return: Pointer to new dog structure.
 */

dog_t *new_dog(char *name, float age, char *owner)
{
	dog_t *new_dog;

	if (!name || !owner || age < 0)
		return (NULL);

	new_dog = malloc(sizeof(dog_t));
	if (!new_dog)
		return (NULL);

	new_dog->name = (char *)malloc(sizeof(char) * (len(name) + 1));
	if (!(new_dog->name))
	{
		free(new_dog);
		return (NULL);
	}

	new_dog->owner = (char *)malloc(sizeof(char) * (len(owner) + 1));
	if (!(new_dog->owner))
	{
		free(new_dog->name);
		free(new_dog);
		return (NULL);
	}

	copy(new_dog->name, name);
	new_dog->age = age;
	copy(new_dog->owner, owner);

	return (new_dog);
}

/**
 * len - counts length of a string or array
 * @str: string or array to be counted
 *
 * Return: Length of string or array.
 */

int len(char *str)
{
	int c = 0;

	while (*(str + c))
		c++;

	return (c);
}

/**
 * copy - copies elements from an array to another array
 * @dest: destination of the copy
 * @src: string or array to be copied
 *
 * Return: Nothing.
 */

void copy(char *dest, char *src)
{
	int x = 0;

	while (*(src + x))
	{
		*(dest + x) = *(src + x);
		x++;
	}
	*(dest + x) = '\0';
}
