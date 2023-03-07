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

	for (c = 0; accept[c] != '\0'; c++)
	{
		for (d = 0; s[d] != '\0'; d++)
		{
			if (accept[c] == s[d])
			{
				if (d > x) x = d;
				found = 1;

				/**
				 * If the character is found in the string,
				 * no need to search the remainder of the string
				 */
				break;
			}
		}

		/**
		 * If the character is not found in the whole string,
		 * break return 0, since every character must be present
		 * in the string for it to be valid.
		 */
		if (found == 0)
			return (0);
		else
			found = 0;
	}

	return (x + 1);
}
