#include "main.h"

/**
 * print_number - Entry point
 * @n: Integer to be printed
 *
 * This is a C program that prints the digits,
 * of an integer, using the _putchar function.
 *
 * Return: 0.
*/


void print_number(int n)
{
	int curr;
	int d;
	int digits;

	/**
	 * If number is negative, print the minus sign,
	 * then convert it to positive and store in another variable,
	 * else just store the number in the other variable.
	 */
	curr = _abs(n);

	/* Get the number of digits in the integer */
	digits = count_digits(curr);

	/**
	 * Store the original number again
	 * If negative, convert to positive
	 */

	curr = _abs(n);

	if (n < 0)
		_putchar('-');

	/* Get each digit and print */
	while (digits > 1)
	{
		d = curr / power(10, digits - 1);
		_putchar(d + '0');
		curr = curr % power(10, digits - 1);
		digits--;
	}

	_putchar(curr + '0'); /* Print the last digit*/
}

/**
 * count_digits - Counts number of digits in an integer
 * @x: Integer to be counted
 *
 * Return: 0.
*/

int count_digits(int x)
{
	int digits = 0;

	while (x != 0)
	{
		digits++;
		x /= 10;
	}

	return (digits);
}

/**
 * _abs - Returns the absolute value of an integer
 * @x: Integer to be processed.
 *
 * Return: integer
*/

int _abs(int x)
{
	if (x >= 0)
		return (x);
	else
		return (-x);
}

/**
 * power - Finds the power of an integer
 * @base: Integer to be processed.
 * @exponent: Power to be raised to.
 *
 * Return: integer
*/

int power(int base, int exponent)
{
	int i;
	int result = 1;

	for (i = 0; i < exponent; i++)
	{
		result *= base;
	}

	return (result);
}
