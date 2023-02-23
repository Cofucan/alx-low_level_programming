# include "main.h"

/**
 * print_diagonal - Entry point
 * @n: Number of times to print the '\'
 *
 * This is a simple C code,
 * It prints the backward slash sign '\'
 * a specified number of times
 *
 * Return: nothing
*/

void print_diagonal(int n)
{
	int u, v;

	if (n <= 0)
	{
		_putchar('\n');
		return;
	}

	for (u = 1; u <= n; u++)
	{
		for (v = 1; v <= u; v++)
			_putchar(' ');
		_putchar('\\');
		_putchar('\n');
	}
}
