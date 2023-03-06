#include "main.h"

/**
 * _strchr - Entry point
 * @s: String to search.
 * @c: Character to find.
 *
 * This program that locates a character in a string.
 *
 * Return: Pointer to first occurrence, or null.
 */

char *_strchr(char *s, char c)
{
	int u;

	for (u = 0; s[u] != '\0'; u++)
	{
		if (s[u] == c)
			return (&s[u]);
	}

	/* If c is the null terminator, return address of the null */
	if (s[u] == c)
		return (&s[u]);

	return (NULL);
}
