#include "main.h"

int check_prime(int n, int y);

/**
 * is_prime_number - Entry point.
 * @n: Number to check for prime.
 *
 * This function checks if a number is a prime number,
 * using recursion.
 *
 * Return: 1 or 0.
 */

int is_prime_number(int n)
{
	if (n <= 1)
		return (0);

	return (check_prime(n, 2));
}

/**
 * check_prime - Function.
 * @n: Number to check for prime.
 * @y: Number to recursively divide the prime by.
 *
 * This function checks if a number is a prime number,
 * by recursively dividing the number by every number from 0
 * to until it gets to half of the number we're checking.
 *
 * If at any point before it gets to half the number,
 * it finds a number that divides the original number without remainder,
 * then it means that our number is not a prime number,
 * but if it gets to the half way point and theres no number that
 * divides the original number without remainder,
 * it means that our number is a prime number.
 *
 * Return: 1 or 0.
 */

int check_prime(int n, int y)
{
	if (y >= (n / 2))
		return (1);

	if (n % y == 0)
		return (0);

	return (check_prime(n, y + 1));
}


