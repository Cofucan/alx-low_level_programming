#include "main.h"

/**
 * _puts2 - Entry point
 * @str: String to be printed.
 *
 * This program prints every other character
 * of a string from a character pointer.
 *
 * return: Nothing
 */

void puts2(char *str)
{
	int c = 0;

	while (*(str + c) != '\0')
	{
		if (c % 2 == 0)
			_putchar(*(str + c));
		c++;
	}
	_putchar('\n');
}
