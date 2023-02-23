# include "main.h"

/**
 * print_numbers - Entry point
 *
 * This is a simple C program,
 * It prints all numbers from 0 - 9.
 *
 * Return: nothing
*/

void print_numbers(void)
{
	int u;

	for (u = '0'; u <= '9'; u++)
	{
		_putchar(u);
	}
	_putchar('\n');
}
