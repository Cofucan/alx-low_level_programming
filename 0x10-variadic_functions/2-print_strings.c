#include <stdlib.h>
#include <stdio.h>
#include <stdarg.h>
#include "variadic_functions.h"

/**
 * print_strings - Prints all strings passed to function
 * @separator: Seperator to be printed between strings
 * @n: Number of arguments to be printed
 *
 * Return: Nothing.
 */

void print_strings(const char *separator, const unsigned int n, ...)
{
	unsigned int x;
	char *str;
	va_list ptr;

	va_start(ptr, n);

	for (x = 0; x < n; x++)
	{
		str = va_arg(ptr, char*);

		/* If there is at least one character in the string */
		str ? printf("%s", str) : printf("(nil)");

		/* If x is not the last index and separator is not null */
		if (separator && (x != (n - 1)))
			printf("%s", separator);
	}
	printf("\n");

	va_end(ptr);

}
