# include "main.h"

/**
 * _isupper - Entry point
 * @c: Character to be checked
 *
 * This is a simple C program,
 * it checks if a character is uppercase or not.
 *
 * Return: 0 or 1
*/

int _isupper(int c)
{
	if (c >= 'A' && c <= 'Z')
	{
		return (1);
	}
	else
		return (0);
}
