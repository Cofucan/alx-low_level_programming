#include "main.h"

/**
 * _strcmp - Entry point
 * @s1: First string to be compared.
 * @s2: Second string to be compated.
 *
 * This program compares two strings.
 *
 * Return: negative, positive or zero integer.
 */

int _strcmp(char *s1, char *s2)
{
	int u = 0;
	int diff;

	while (*(s1 + u) != '\0')
	{
		diff = *(s1 + u) - *(s2 + u);
		if (diff > 0 || diff < 0)
			return (diff);
		u++;
	}

	diff = *(s1 + u) - *(s2 + u);
	if (diff > 0 || diff < 0)
		return (diff);

	return (0);
}
