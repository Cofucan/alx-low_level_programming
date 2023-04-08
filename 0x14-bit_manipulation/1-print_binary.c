#include <stdio.h>
#include <stdbool.h>
#include "main.h"

/**
 * print_binary - prints the binary representation of a number
 * @n: Number to be printed in binary
 *
 * Return: Converted number.
 */

void print_binary(unsigned long int n)
{
	unsigned long int mask;
	bool current_bit;
	bool most_significant_bit = false;

	mask = 1UL << (sizeof(unsigned long int) * 8 - 1);

	while (mask)
	{
		current_bit = n & mask;

		if (current_bit && !most_significant_bit)
			most_significant_bit = true;

		if (most_significant_bit)
			_putchar(current_bit ? '1' : '0');

		mask >>= 1;
	}

	if (!most_significant_bit)
		_putchar('0');
}
