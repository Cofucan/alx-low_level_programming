#include "main.h"
#include <stdio.h>
#include <stdlib.h>

/**
 * argstostr - conatenates arguments passed to program
 * @ac: number of arguments passed
 * @av: vector containing arguments passed
 *
 * Return: Pointer to vector.
 */

char *argstostr(int ac, char **av)
{
	int a, b, x;
	int size = 0;
	char *new_string;
	int new_lines = ac - 1; /* No of bytes to allocate for newlines */

	/* If no argument is passed */
	if (ac == 0 || av == NULL)
		return (NULL);

	/* Count total size of arguments string vector */
	for (a = 1; av[a]; a++)
		for (b = 0; av[a][b]; b++)
			size++;

	/*
	 * Allocate memory for new string that contains all arguments,
	 * including space for newline character after each argument.
	 */
	new_string = malloc((sizeof(char) * size) + new_lines + 1);

	/* If malloc fails */
	if (!new_string)
		return (NULL);

	/* Copy every character in every argument passed, followed by newline. */
	for (a = 1, x = 0; av[a]; a++, x++)
	{
		for (b = 0; av[a][b]; b++, x++)
			new_string[x] = av[a][b];
		new_string[x] = '\n';
	}

	return (new_string);
}
