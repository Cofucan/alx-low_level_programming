#include "main.h"

/**
 * factorial - Entry point.
 * @n: Number to find factorial of.
 *
 * This function returns the factorial of a number,
 * using recursion.
 *
 * Return: Factorial (integer).
 */

int factorial(int n)
{
	if (n < 0)
		return (-1);

	if (n == 0)
		return (1);

	return (n * factorial(n - 1));
}
