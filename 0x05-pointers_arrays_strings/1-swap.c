#include "main.h"

/**
 * swap_int - Entry point
 * @a: First pointer to be swapped.
 * @b: Second pointer to be swapped.
 *
 * This program swaps the values located
 * at two pointers
 *
 * return: Nothing
 */

void swap_int(int *a, int *b)
{
	int u;

	u = *a;
	*a = *b;
	*b = u;
}
