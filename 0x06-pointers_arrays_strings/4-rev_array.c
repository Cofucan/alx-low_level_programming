#include "main.h"

/**
 * swap_int - Entry point
 * @a: Array to be reversed.
 * @n: Number of elements in array.
 *
 * This program reverses the contents of
 * an array of integers.
 *
 * Return: Nothing
 */

void reverse_array(int *a, int n)
{
	int u, tmp;

	for (u = 0; u < n / 2; u++)
	{
		tmp = a[u];
		a[u] = a[n - u - 1];
		a[n - u - 1] = tmp;
	}
}
