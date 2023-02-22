# include "main.h"

/**
 * print_alphabet - Entry point
 *
 * This is a simple C code,
 * it prints the alphabets in lowercase
 * using the custom _putchar function
 *
 * Return: 0
*/

void print_alphabet(void)
{
	char str[] = "abcdefghijklmnopqrstuvwxyz";
	int i;

	for (i = 0; i < 26; i++)
	{
		_putchar(str[i]);
	}
	_putchar('\n');
}
