#include "main.h"

/**
 * _strspn - Entry point
 * @s: String to search.
 * @accept: Bytes to look for.
 *
 * This function gets the length of a prefix substring.
 *
 * Return: Number of bytes of intial segment of s.
 */

unsigned int _strspn(char *s, char *accept)
{
	unsigned int x = 0;
	unsigned int c, d;
	int found = 0;

	for (c = 0; s[c] != '\0'; c++)
	{
		for (d = 0; accept[d] != '\0'; d++)
		{
			if (s[c] == accept[d])
			{
				x++;
				found = 1;
				break;
			}
		}

		/**
		 * If the character is not found in the whole string,
		 * return the last count, since every character must be present
		 * in the string for it to be valid.
		 */
		if (found == 0)
			return (x);
		found = 0;
	}

	return (x);
}
