#include "main.h"
#include <stdio.h>
#include <stdlib.h>

/**
 * str_concat - concatenates two strings to new array
 * @s1: first string
 * @s2: second string
 *
 * Return: Pointer to newly allocated memory containing
 * concatenated string.
 */

char *str_concat(char *s1, char *s2)
{
	int c, u;
	int len1, len2;
	char *joined;

	/* Count length of string 1 */
	for (len1 = 0; s1[len1]; len1++)

	/* Count length of string 2 */
	for (len2 = 0; s2[len2]; len2++)

	/* If string is empty or NULL, length of array should be 1 */
	if (s1[0] == '\0' || s1 == NULL)
		len1 = 1;
	if (s2[0] == '\0' || s2 == NULL)
		len2 = 1;

	/* Allocate memory for new array, including null terminaror */
	joined = malloc((sizeof(char) * (len1 + len2)) + 1);

	/* If allocation fails */
	if (!joined)
		return (NULL);

	/* Copy characters from first string */
	for (c = 0, u = 0; s1[c]; c++, u++)
		joined[u] = s1[c];

	/*
	 * Copy characters from second string.
	 * We are not reinitializing u because it needs to
	 * continue from its last index after the first string
	 * was copied.
	 */
	for (c = 0; s2[c]; c++, u++)
		joined[u] = s2[c];

	return (joined);
}
