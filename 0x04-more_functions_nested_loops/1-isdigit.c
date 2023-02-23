# include "main.h"

/**
 * _isdigit - Entry point
 * @c: Number to be checked
 *
 * This is a simple C program,
 * it checks if a number is a digit.
 *
 * Return: 0 or 1
*/

int _isdigit(int c)
{
	if (c >= '0' && c <= '9')
	{
		return (1);
	}
	else
		return (0);
}
