#include <stdio.h>

int add(int a, int b);
int sub(int a, int b);
int mul(int a, int b);
int div(int a, int b);
int mod(int a, int b);

/**
 * add - sums two numbers.
 * @a: First number.
 * @b: Second number.
 *
 * Return: Integer result of operation.
 */

int add(int a, int b)
{
	return (a + b);
}

/**
 * sub - subtracts a number from another.
 * @a: First number.
 * @b: Second number.
 *
 * Return: Integer result of operation.
 */

int sub(int a, int b)
{
	return (a - b);
}

/**
 * mul - multiplies two numbers.
 * @a: First number.
 * @b: Second number.
 *
 * Return: Integer result of operation.
 */

int mul(int a, int b)
{
	return (a * b);
}

/**
 * div - divides a number by another.
 * @a: First number.
 * @b: Second number.
 *
 * Return: Integer result of operation.
 */

int div(int a, int b)
{
	return (a / b);
}

/**
 * mod - returns the remainder when a number is divided by another.
 * @a: First number.
 * @b: Second number.
 *
 * Return: Integer result of operation.
 */

int mod(int a, int b)
{
	return (a % b);
}

