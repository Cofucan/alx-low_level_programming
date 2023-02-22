# include "main.h"

/**
 * times_table - Entry point
 *
 * This is a C function.
 * It prints the 9 times table, starting with 0.
 *
 * Return: notinng
*/

void times_table(void)
{
	int x, y, product;

	for (y = 0; y <= 9; y++)
	{
		for (x = 0; x <= 9; x++)
		{
			product = y * x;
			if (x != 0)
			{
				_putchar(',');
				_putchar(' ');
			}
			if (product >= 10)
			{
				_putchar((product / 10) + '0');
				_putchar((product % 10) + '0');
			}
			else if ((product < 10) && (x != 0))
			{
				_putchar(' ');
				_putchar((product % 10) + '0');
			}
			else
				_putchar((product % 10) + '0');
		}
		_putchar('\n');
	}
}
