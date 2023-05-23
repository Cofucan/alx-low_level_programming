# include "main.h"

/**
 * _islower - Entry point
 * @c: The character to check
 *
 * This is a C function.
 * It checks is a character is lowercase.
 *
 * Return: 0 or 1
*/

int _islower(int c)
{
	return (c >= 'a' && c <= 'z');
}
