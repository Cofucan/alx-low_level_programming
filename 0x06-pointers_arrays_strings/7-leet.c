#include "main.h"

/**
 * leet - Entry point
 * @str: Pointer to character array.
 *
 * This encodes a string into 1337 (leet).
 *
 * Return: Pointer to string.
 */

char *leet(char *str)
{
	int c = 0;
	int u;
	char leet_chars[] = "aAeEoOtTlL";
	char leet_nums[] = "4433007711";

	/* Capitalize the remaining words */
	while (str[c] != '\0')
	{
		for (u = 0; u < 10; u++)
		{
			if (leet_chars[u] == str[c])
			{
				str[c] = leet_nums[u];
			}
		}
		c++;
	}
	return (str);
}
