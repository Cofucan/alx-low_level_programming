#include <stdlib.h>
#include <stdio.h>
#include <stdarg.h>
#include "variadic_functions.h"

/**
 * print_numbers - Prints all numbers passed to function
 * @separator: Seperator to be printed between numbers
 * @n: Number of arguments to be printed
 *
 * Return: Nothing.
 */

void print_numbers(const char *separator, const unsigned int n, ...)
{
	unsigned int x;
	va_list ptr;

	va_start(ptr, n);

	for (x = 0; x < n; x++)
	{
		printf("%d", va_arg(ptr, int));

		/* If x is not the last index and separator is not null */
		if (separator && (x != (n - 1)))
			printf("%s", separator);
	}
	printf("\n");

	va_end(ptr);

}
