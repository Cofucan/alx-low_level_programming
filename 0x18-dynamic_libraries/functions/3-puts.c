#include "main.h"

/**
 * _puts - Entry point
 * @str: String to be printed.
 *
 * This program prints the characters
 * of a string from a character pointer.
 *
 * Return: Nothing
 */

void _puts(char *str)
{
	int c = 0;

	while (*(str + c) != '\0')
	{
		_putchar(*(str + c));
		c++;
	}
	_putchar('\n');
}
