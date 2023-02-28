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
	int c;
	
	if (n <= 0)
		return;

	for (c = 0; c < (n - 1); c++)
	{
		printf("%d, ", a[c]);
	}
	printf("%d\n", a[n - 1]);
}
