#include "main.h"

/**
 * _strcat - Entry point
 * @dest: Destination of concatenated string.
 * @src: String to be concatenated.
 *
 * This program joins two strings.
 *
 * Return: Concatenated string.
 */

char *_strcat(char *dest, char *src)
{
	int t = 0;
	int u = 0;

	while (*(dest + t) != '\0')
		t++;

	while (*(src + u) != '\0')
	{
		*(dest + t) = *(src + u);
		t++;
		u++;
	}

	*(dest + t) = '\0'; /* Add the null terminator at the end */

	return (dest);
}
