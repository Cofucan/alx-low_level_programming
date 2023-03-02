#include "main.h"

/**
 * string_toupper - Entry point
 * @str: Pointer to character array/.
 *
 * This program converts all lowercase characters
 * in a string to uppercase.
 *
 * Return: Pointer to string.
 */

char *string_toupper(char *str)
{
	int c = 0;

	while (str[c] != '\0')
	{
		if (str[c] >= 'a' && str[c] <= 'z')
		{
			str[c] -= 32;
		}
		c++;
	}
	return (str);
}
