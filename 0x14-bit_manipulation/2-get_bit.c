#include <stdio.h>
#include <stdbool.h>
#include "main.h"

/**
 * get_bit - gets the bit at a certain index of a binary number
 * @n: Number to be scanned
 * @index: Index in which to find the bit
 *
 * Return: Bit at that index or -1 if index is out of range.
 */

int get_bit(unsigned long int n, unsigned int index)
{
	unsigned long int mask, idx;
	bool bit;

	if (index >= (sizeof(unsigned long int) * 8))
		return (-1);

	mask = 1UL;
	mask <<= index;
	bit = (n & mask ? 1 : 0);

	return (bit);
}
