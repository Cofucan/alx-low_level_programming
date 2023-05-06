#include "variadic_functions.h"
#include <stdarg.h>
#include <stdio.h>
#include <stdbool.h>

/**
 * print_all - Prints all arguments passed into function
 * @format: specifies the format of each argument passed
 *
 * Return: Nothing
 */

void print_all(const char * const format, ...)
{
	va_list args;
	int c = 0;
	int promoted_char;
	double promoted_float;
	char *str;
	bool valid_type;

	va_start(args, format);

	while (*(format + c))
	{
		/* Assume that the current format specifier is valid */
		valid_type = true;

		/* Print the argument based on its format specifier */
		switch (*(format + c))
		{
			case 'c':
				/* Promote the argument to an int, then cast it as a char */
				promoted_char = (char)va_arg(args, int);
				printf("%c", promoted_char);
				break;

			case 'i':
				printf("%d", va_arg(args, int));
				break;

			case 'f':
				/* Promote the argument to a double, then case it as a float */
				promoted_float = (float)va_arg(args, double);
				printf("%f", promoted_float);
				break;

			case 's':
				str = va_arg(args, char *);

				/* If the string is null */
				if (!str)
				{
					printf("(nil)");
					break;
				}

				printf("%s", str);
				break;

			/* If none of the cases are met, then the type is not valid */
			default:
				valid_type = false;
		}
		c++;

		/* If the current specifier is valid and not the last in the list */
		if (*(format + c) && valid_type)
			printf(", ");
	}

	printf("\n");

	va_end(args);
}
