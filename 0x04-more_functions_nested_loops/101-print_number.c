#include "main.h"

/**
 * print_number - Entry point
 * @n: Integer to be printed
 *
 * This is a C program that prints the digits,
 * of an integer, using the _putchar function.
 *
 * Return: 0.
*/

void print_number(int n)
{
	unsigned int m, d, count;

	if (n < 0)
	{
		_putchar(45);
		m = n * -1;
	}
	else
	{
		m = n;
	}

	d = m;
	count = 1;

	while (d > 9)
	{
		d /= 10;
		count *= 10;
	}

	for (; count >= 1; count /= 10)
	{
		_putchar(((m / count) % 10) + 48);
	}
}
