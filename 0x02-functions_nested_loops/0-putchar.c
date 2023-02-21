# include "main.h"

/**
 * main - Entry point
 *
 * This is a simple C code,
 * it prints out a text to stdout
 * using the custom _putchar function
 *
 * Return: 0
*/

int main(void)
{
	char str[] = "_putchar";
	int i;

	for (i = 0; i <= 8; i++)
	{
		_putchar(str[i]);
	}
	_putchar('\n');

	return (0);
}
