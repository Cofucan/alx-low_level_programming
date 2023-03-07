#include "main.h"

/**
 * _strbrk - Entry point
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
	int c, d;
	int first = 0;
	int found = 0;

	for (c = 0; accept[c] != '\0'; c++)
	{
		for (d = 0; s[d] != '\0'; d++)
		{
			if (s[d] == accept[c])
			{
				if (d < first)
				{
					first = d;
				}
				found = 1;
				break;
			}
		}
	}

	if (found == 1)
		return (&s[first]);

	return (NULL);
}
