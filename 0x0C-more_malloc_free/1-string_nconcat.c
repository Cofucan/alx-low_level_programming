#include "main.h"
#include <stdio.h>
#include <stdlib.h>

/**
 * string_nconcat - concatenates two strings
 * @s1: first string to be copied
 * @s2: second string to be copied
 * @n: number of bytes from second string to copy
 *
 * Return: Pointer to newly allocated memory which contains
 * first string and first n bytes of second string.
 */

char *string_nconcat(char *s1, char *s2, unsigned int n)
{
	unsigned int u = 0, c, len1, len2, bytes_to_copy;
	char *mem;
	/*
	 * If string is NULL or empty, length of array should be 1.
	 * We must first check for null before any other check,
	 * else we would get segmetation error if string happens to be null
	 */
	if (s1 == NULL || s1[0] == '\0')
		len1 = 1;
	else
		for (len1 = 0; s1[len1]; len1++) /* Count length of string 1 */
			continue;

	if (s2 == NULL || s2[0] == '\0')
		len2 = 1;
	else
		for (len2 = 0; s2[len2]; len2++) /* Count length of string 2 */
			continue;

	bytes_to_copy = n > len2 ? len2 : n;

	/* Allocate mem. If n > length of s2, allocate space for the whole s2 */
	mem = malloc((sizeof(char) * (len1 + bytes_to_copy)) + 1);
	if (mem == NULL)
		return (NULL);

	if (s1) /* Only copy the bytes from s1 if it is not null */
	{
		for (c = 0; s1[c]; c++, u++)
			mem[u] = s1[c];
	}
	if (s2) /* Only copy n bytes of s2 if it is not null */
	{
		for (c = 0; c < bytes_to_copy; c++, u++)
			mem[u] = s2[c];
	}
	/* Terminate new array with null */
	mem[u] = '\0';

	return (mem);
}
