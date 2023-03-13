#include "main.h"
#include <stdio.h>
#include <stdlib.h>

/**
 * _strdup - copies an array of string to new memory location
 * @str: string to be copied
 *
 * Return: Pointer to new copy of string.
 */

char *_strdup(char *str)
{
	int u;
	int len;
	char *new_str;

	/* If string is empty */
	if (str == NULL)
		return (NULL);

	if (str[0] == '\0')
		return (NULL);

	/* Count length of string */
	for (len = 0; *(str + len); len++)

	/* Allocate memory for new copy */
	new_str = malloc(sizeof(char) * len);

	/* If allocation fails */
	if (!new_str)
		return (NULL);

	/* Copy characters to new array */
	for (u = 0; u < len; u++)
		new_str[u] = str[u];

	return (new_str);
}
