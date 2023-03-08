#include "main.h"

/**
 * _strlen_recursion - Entry point.
 * @s: String to count length of.
 *
 * This function return the length of a string,
 * using recursion.
 *
 * Return: Length of string (integer).
 */

int _strlen_recursion(char *s)
{
	if (*s == '\0')
		return (0);

	return (1 + _strlen_recursion(s + 1));
}
