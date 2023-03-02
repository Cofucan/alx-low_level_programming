#include "main.h"

/**
 * rot13 - Entry point
 * @str: Pointer to character array.
 *
 * This function encodes a string into rot13.
 *
 * Return: Pointer to string.
 */

char *rot13(char *str)
{
	int c = 0;
	int u;
	char letters[] = "ABCDEFGHIJKLMNOPQRSTUVWXYZabcdefghijklmnopqrstuvwxyz";
	char cyphs[] = "NOPQRSTUVWXYZABCDEFGHIJKLMnopqrstuvwxyzabcdefghijklm";

	while (str[c] != '\0')
	{
		for (u = 0; u < 52; u++)
		{
			if (str[c] == letters[u])
			{
				str[c] = cyphs[u];
				break;
			}
		}
		c++;
	}
	return (str);
}
