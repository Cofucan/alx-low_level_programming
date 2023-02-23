# include "main.h"

/**
 * print_square - Entry point
 * @size: Length of the square to be printed.
 *
 * This is a simple C program,
 * It prints a square on the terminal
 * using the hash sign '#'.
 *
 * Return: nothing
*/

void print_square(int size)
{
	int u, v;

	if (size <= 0)
	{
		_putchar('\n');
		return;
	}

	for (u = 1; u <= size; u++)
	{
		for (v = 1; v <= size; v++)
		{
			_putchar('#');
		}
		_putchar('\n');
	}
}
