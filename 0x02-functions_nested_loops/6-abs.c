# include "main.h"

/**
 * _abs - Entry point
 * @n: The number to compute
 *
 * This is a C function.
 * It prints the absolute value of a number.
 *
 * Return: integer
*/

int _abs(int n)
{
	int abs;

	if (n > 0 || n == 0)
	{
		return (n);
	}
	else
	{
		abs = n * -1;
		return (abs);
	}
}
