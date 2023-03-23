#include <stdlib.h>
#include <stdio.h>
#include <stdarg.h>
#include "variadic_functions.h"

/**
 * sum_them_all - Sums all arguments passed to function
 * @n: Number of arguments to be summed
 *
 * Return: Integer.
 */

int sum_them_all(const unsigned int n, ...)
{
	unsigned int x;
	int sum = 0;
	va_list args;

	if (n == 0)
		return (n);

	va_start(args, n);

	for (x = 0; x < n; x++)
		sum += va_arg(args, int);

	return (sum);
}
