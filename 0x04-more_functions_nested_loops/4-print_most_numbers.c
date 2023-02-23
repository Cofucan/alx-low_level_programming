# include "main.h"

/**
 * print_most_numbers - Entry point
 *
 * This is a simple C code,
 * It prints all numbers from 0 - 9,
 * excluding 2 and 4.
 *
 * Return: nothing
*/

void print_most_numbers(void)
{
	int u;

	for (u = '0'; u <= '9'; u++)
	{
		if (u == '2' || u == '4')
			continue;
		_putchar(u);
	}
	_putchar('\n');
}
