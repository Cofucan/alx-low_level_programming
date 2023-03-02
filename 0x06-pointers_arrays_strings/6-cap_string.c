#include "main.h"

/**
 * cap_string - Entry point
 * @str: Pointer to character array.
 *
 * This function capitalizes all words in a string.
 *
 * Return: Pointer to string.
 */

char *cap_string(char *str)
{
	int c = 0;

	if (str[0] == '\0')
		return (str);

	while (str[c] != '\0')
	{
		if (is_seperator(str[c]) && str[c + 1] >= 'a' && str[c + 1] <= 'z')
		{
			str[c + 1] -= 32;
		}
		c++;
	}
	return (str);
}


/**
 * is_seperator - Utility function
 * @s: Character to be checked.
 *
 * This function checks to see if a character is
 * a special character by comparing with specific
 * characters.
 *
 * Return: 1 or 0.
 */

int is_seperator(char s)
{
	if (s == '\t' ||
		s == '\n' ||
		s == ' ' ||
		s == ',' ||
		s == ';' ||
		s == '.' ||
		s == '!' ||
		s == '?' ||
		s == '"' ||
		s == '(' ||
		s == ')' ||
		s == '{' ||
		s == '}'
	)
		return (1);
	else
		return (0);
}
