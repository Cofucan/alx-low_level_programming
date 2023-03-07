#include "main.h"

/**
 * _strstr - Entry point
 * @haystack: String to search.
 * @needle: Substring to find.
 *
 * This function locates a substring in a string.
 *
 * Return: Pointer to the first byte of the found substring,
 * or null.
 */

char *_strstr(char *haystack, char *needle)
{
	int c = 0;

	while (*haystack)
	{
		if (*haystack == needle[0])
		{
			for (c = 1; needle[c]; c++)
			{
				if (*(haystack + c) != needle[c])
					break;
			}
		}

		if (needle[c] == '\0')
			return (haystack);

		haystack++;
	}
	return (needle[0] == '\0' ? haystack : NULL);
}
