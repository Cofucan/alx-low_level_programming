#include "main.h"

/**
 * _strncpy - Entry point
 * @dest: Destination of copied string.
 * @src: String to be copied.
 * @n: Number of characters from src to be copied.
 *
 * This program copies a string to another destination.
 *
 * Return: Pointer to destination.
 */

char *_strncpy(char *dest, char *src, int n)
{
	int u = 0;

	while (u < n && *(src + u) != '\0')
	{
		*(dest + u) = *(src + u);
		u++;
	}

	/* Fill any remaining spaces with null characters */
	while (u < n)
	{
		*(dest + u) = '\0';
		u++;
	}

	return (dest);
}
