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

	/* Capitalize the remaining words */
	while (str[c] != '\0')
	{
		if (str[c] == 'a' || str[c] == 'A')
			str[c] = 4 + '0';
		else if (str[c] == 'e' || str[c] == 'E')
			str[c] = 3 + '0';
		else if (str[c] == 'o' || str[c] == 'O')
			str[c] = 0 + '0';
		else if (str[c] == 't' || str[c] == 'T')
			str[c] = 7 + '0';
		else if (str[c] == 'l' || str[c] == 'L')
			str[c] = 1 + '0';
		c++;
	}
	return (str);
}
