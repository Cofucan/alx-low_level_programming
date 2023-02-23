# include "main.h"

/**
 * print_line - Entry point
 * @n: Number of times to print the '_'
 *
 * This is a simple C program,
 * It prints the underscore sign '_'
 * a specified number of times
 *
 * Return: nothing
*/

void print_line(int n)
{
	int u;

	if (n <= 0)
	{
		_putchar('\n');
		return;
	}

	for (u = 1; u <= n; u++)
	{
		_putchar('_');
	}
	_putchar('\n');
}
