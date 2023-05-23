#include "main.h"

/**
 * _strpbrk - Entry point
 * @s: String to search.
 * @accept: Bytes to look for.
 *
 * This function searches a string for any of a set of bytes.
 *
 * Return: Pointer to the byte in s that matches one of the
 * bytes in accept.
 */

char *_strpbrk(char *s, char *accept)
{
	int c;

	while (*s)
	{
		for (c = 0; accept[c]; c++)
		{
			if (*s == accept[c])
				return (s);
		}
		s++;
	}

	return (NULL);
}
