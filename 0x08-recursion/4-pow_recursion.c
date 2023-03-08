#include "main.h"

/**
 * _pow_recursion - Entry point.
 * @x: Number to raise to a power.
 * @y: Power to raise number to.
 *
 * This function raises a number to a power,
 * using recursion.
 *
 * Return: Number raised (integer).
 */

int _pow_recursion(int x, int y)
{
	if (y < 0)
		return (-1);

	if (y == 0)
		return (1);

	return (x * _pow_recursion(x, y - 1));
}
