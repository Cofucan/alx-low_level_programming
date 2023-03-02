#include "main.h"

/**
 * print_number - Entry point
 * @n: Number to be printed..
 *
 * This program prints an integer
 * using the putchar function.
 *
 * Return: Nothing
 */

void print_number(int n)
{
	unsigned int n_copy, digit, power, len;

	power = 1;
	len = 1;

	if (n < 0)
	{
		n_copy = n * -1;
		_putchar('-');
	}
	else
		n_copy = n;

	while (n_copy / power > 9)
	{
		power *= 10;
		len++;
	}

	while (power >= 10)
	{
		digit = n_copy / power;
		_putchar(digit + '0');
		n_copy %= power;
		power /= 10;
	}
	_putchar(n_copy + '0');
}
