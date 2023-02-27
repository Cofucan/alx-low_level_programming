#include "main.h"

/**
 * print_rev - Entry point
 * @s: String to be printed in reverse.
 *
 * This program prints the characters
 * of a string from a character pointer,
 * in reverse order.
 *
 * return: Nothing
 */

void print_rev(char *s)
{
	int len = 0;

	len = _strlen(s);

	while (len >= 0)
	{
		_putchar(*(s + len));
		len--;
	}
	_putchar('\n');
}

/**
 * _strlen - Entry point
 * @s: String to be counted
 *
 * This program counts the length of
 * a string by counting each character
 * until the null character is encountered.
 *
 * Return: Number of characters in the string.
 */

int _strlen(char *s)
{
	int count = 0;

	while (*(s + count) != '\0')
	{
		count++;
	}

	return (count);
}
