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

	if (!str)
		return (NULL);

	for (len = 0; *(str + len); len++)

	new_str = malloc(sizeof(char) * len);

	if (!new_str)
		return (NULL);

	for (u = 0; u < len; u++)
		new_str[u] = str[u];

	return (new_str);
}
