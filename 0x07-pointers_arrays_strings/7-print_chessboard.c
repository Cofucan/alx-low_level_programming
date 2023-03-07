#include "main.h"

/**
 * print_chessboard - Entry point
 * @a: 2D array to print.
 *
 * This function prints a chessboard.
 *
 * Return: Void
 */

void print_chessboard(char (*a)[8])
{
	int u, v;

	for (u = 0; u < 8; u++)
	{
		for (v = 0; v < 8; v++)
		{
			_putchar(a[u][v]);
		}
		_putchar('\n');
	}
}
