#include "main.h"

/**
 * _atoi - Entry point
 * @s: String to be converted.
 *
 * This program converts a string to an integer,
 * similar to the atio() function.
 *
 * Return: Integer
 */

int _atoi(char *s)
{
	int sign = 1;
	int number = 0;

	while (!(*s >= '0' && *s <= '9'))
	{
		/* handle signs */
		if (*s == '-')
			sign *= -1;
		s++;
	}

	while (*s >= '0' && *s <= '9')
	{
		number = (number * 10) + (*s - '0');
		s++;
	}

	return ((int) (sign * number));
}
