#include "main.h"

/**
 * _strncat - Entry point
 * @dest: Destination of concatenated string.
 * @src: String to be concatenated.
 * @n: Number of characters from src to be joined.
 *
 * This program joins two strings.
 *
 * Return: Pointer to destination string.
 */

char *_strncat(char *dest, char *src, int n)
{
	int t = 0;
	int u = 0;

	while (*(dest + t) != '\0')
		t++;

	while (u < n && *(src + u) != '\0')
	{
		*(dest + t) = *(src + u);
		t++;
		u++;
	}

	*(dest + t) = '\0'; /* Add the null terminator at the end */

	return (dest);
}
