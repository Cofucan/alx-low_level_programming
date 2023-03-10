#include "main.h"

/**
 * _strcpy - Entry point
 * @dest: Address where string will be copied to
 * @src: Original string to be copied
 *
 * This program a string from a char pointer
 * to another chatacter pointer/
 *
 * Return: Pointer to the destination address.
 */

char *_strcpy(char *dest, char *src)
{
	int c = 0;

	while (src[c] != '\0')
	{
		dest[c] = src[c];
		c++;
	}
	dest[c] = src[c]; /* copy the null byte */

	return (dest);
}
