#include "main.h"

/**
 * puts_half - Entry point
 * @str: String to be printed.
 *
 * This program prints second half of
 * the characters of a string
 * from a character pointer,
 *
 * return: Nothing
 */

void puts_half(char *str)
{
	int len = 0;
	int half = 0;

	len = _strlen(str); /* This includes the null terminator */
	half = (len + 1) / 2;
	while (half <= (len - 1))
	{
		_putchar(*(str + half));
		half++;
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
