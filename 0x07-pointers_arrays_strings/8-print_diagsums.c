#include "main.h"
#include <stdio.h>

/**
 * print_diagsums - Entry point
 * @a: Array of square matrix.
 * @size: Size of the square matrix.
 *
 * This function the sum of diagonals of a square matrix
 * of integrers.
 *
 * Return: Void
 */

void print_diagsums(int *a, int size)
{
	int u = 0;
	int v = size - 1;
	int sum_left = 0;
	int sum_right = 0;

	while (u <= (size * size))
	{
		sum_left += a[u];
		u += size + 1;
	}

	while (v < (size * size - 1))
	{
		sum_right += a[v];
		v += size - 1;
	}

	printf("%d, %d\n", sum_left, sum_right);
}
