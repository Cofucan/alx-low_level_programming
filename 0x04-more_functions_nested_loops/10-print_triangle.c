# include "main.h"

/**
 * print_triangle - Entry point
 * @size: Length of the triangle to be printed.
 *
 * This is a simple C program,
 * It prints a triangle on the terminal
 * using the hash sign '#'.
 *
 * Return: nothing
*/

void print_triangle(int size)
{
	int u, v;
	int spaces;

	if (size <= 0)
	{
		_putchar('\n');
		return;
	}

	for (u = 1; u <= size; u++)
	{
		spaces = size - u;

		for (v = 1; v <= spaces; v++)
		{
			_putchar(' ');
		}

		for (v = 1; v <= u; v++)
		{
			_putchar('#');
		}

		_putchar('\n');
	}
}
