# include "main.h"

/**
 * print_last_digit - Entry point
 * @n: The number to compute
 *
 * This is a C function.
 * It prints the last digit of a number.
 *
 * Return: integer
*/

int print_last_digit(int n)
{
	int last;

	last = n % 10;

	if (last < 0)
	{
		last = -last;
	}

	_putchar(last + '0');

	return (last);
}
