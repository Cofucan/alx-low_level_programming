#include <stdio.h>
#include "main.h"

/**
 * clear_bit - sets the value of a bit to 0 at a given index
 * @n: Number to be modified
 * @index: Index in which to set the bit
 *
 * Return: 1 if it worked or -1 if index is out of range.
 */

int clear_bit(unsigned long int *n, unsigned int index)
{
	unsigned long int mask;

	if (index >= (sizeof(unsigned long int) * 8))
		return (-1);

	mask = ~(1UL << index);
	*n &= mask;

	return (1);
}
