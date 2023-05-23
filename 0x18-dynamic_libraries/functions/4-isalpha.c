# include "main.h"

/**
 * _isalpha - Entry point
 * @c: The character to check
 *
 * This is a C function.
 * It checks is a character is an alphabet.
 *
 * Return: 0 or 1
*/

int _isalpha(int c)
{
	int lower = (c >= 'a' && c <= 'z');
	int upper = (c >= 'A' && c <= 'Z');

	return (lower || upper);
}
