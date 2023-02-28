#include "main.h"
#include <stdio.h>

/**
 * print_array - Entry point
 * @a: Integer array pointer.
 * @n: Number of elements to be printed.
 *
 * This program prints the first n elemens
 * of an integer array.
 *
 * return: Nothing
 */

void print_array(int *a, int n)
{
	if (n <= 0)
		return;

	int c;

	for (c = 0; c < (n - 1); c++)
	{
		printf("%d, ", a[c]);
	}
	printf("%d\n", a[n - 1]);
}
