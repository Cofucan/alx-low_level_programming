#include <stdio.h>
#include <stdbool.h>
#include "main.h"

/**
 * set_bit - sets the value of a bit to 1 at a given index
 * @n: Number to be modified
 * @index: Index in which to set the bit
 *
 * Return: 1 if it worked or -1 if index is out of range.
 */

int set_bit(unsigned long int *n, unsigned int index)
{
	unsigned long int mask;

	if (index >= (sizeof(unsigned long int) * 8))
		return (-1);

	mask = 1UL;
	mask <<= index;
	*n |= mask;

	return (1);
}
