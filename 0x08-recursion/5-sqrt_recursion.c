#include "main.h"

int _sqrt(int n, int y);

/**
 * _sqrt_recursion - Entry point.
 * @n: Number to find square root of.
 *
 * This function finds the natural square root,
 * of a number using recursion.
 *
 * Return: Square root (integer).
 */

int _sqrt_recursion(int n)
{
	if (n < 1)
		return (-1);

	if (n == 0 || n == 1)
		return (n);

	return (_sqrt(n, 0));
}

/**
 * _sqrt - Square root function.
 * @n: Number to fund square root of.
 * @y: Number to recursively check if its the square root.
 *
 * This function finds the natural square root of a number,
 * by recursively squaring every number from 0
 * to until it gets to a number square is
 * greater than the number whose square root we're trying
 * to find
 * At that point it means the number has no natural square root.
 *
 * Return: Square root (integer).
 */

int _sqrt(int n, int y)
{
	if (y * y == n)
		return (y);

	if (y * y > n)
		return (-1);

	return (_sqrt(n, y + 1));
}


