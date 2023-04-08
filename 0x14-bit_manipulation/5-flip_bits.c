#include <stdio.h>
#include <stdbool.h>
#include "main.h"

/**
 * flip_bits - counts the number of bits that need to be flipped
 *			   to change change a number to another
 * @n: First number
 * @m: Second number
 *
 * Return: Number of bits that need to be changed.
 */

unsigned int flip_bits(unsigned long int n, unsigned long int m)
{
    unsigned long int mask, total_bits;
    unsigned int exclusive_bits = 0;

    total_bits = (sizeof(unsigned long int) * 8);

    for (mask = 1UL; total_bits; mask <<= 1, total_bits--)
    {
        if ((n & mask) ^ (m & mask))
            exclusive_bits += 1;
    }

    return (exclusive_bits);
}
