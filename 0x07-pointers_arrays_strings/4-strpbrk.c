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
	int i;

	while (*s)
	{
		for (i = 0; accept[i]; i++)
		{
			if (*s == accept[i])
				return (s);
		}
		s++;
	}
	return (NULL);
}
