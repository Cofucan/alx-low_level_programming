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

	/* If array to be copied is null */
	if (str == NULL)
		return (NULL);

	/* Count length of string */
	for (len = 0; *(str + len); len++)

	/* If string is empty, length of new array should be 1 */
	if (str[0] == '\0')
		len = 1;

	/* Allocate memory for new copy, including null terminaror */
	new_str = malloc((sizeof(char) * len) + 1);

	/* If allocation fails */
	if (!new_str)
		return (NULL);

	/* Copy characters to new array */
	for (u = 0; u < len; u++)
		new_str[u] = str[u];

	return (new_str);
}
