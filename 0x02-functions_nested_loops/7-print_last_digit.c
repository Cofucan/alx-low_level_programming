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
	int i;

	if (n < 0)
	{
		n = -n;
	}

	i = n % 10;

	_putchar(i + '0');

	return (i);
}
