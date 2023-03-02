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
	int n_copy, power, len;

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

	for (; power >= 1; power /= 10)
	{
		_putchar(((n_copy / power) % 10) + '0');
	}
}
