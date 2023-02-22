# include "main.h"

/**
 * print_alphabet_x10 - Entry point
 *
 * This is a simple C code,
 * it prints the alphabets in lowercase
 * 10 times
 * using the custom _putchar function
 *
 * Return: 0
*/

void print_alphabet_x10(void)
{
	char str[] = "abcdefghijklmnopqrstuvwxyz";
	int i, j;

	for (i = 0; i < 10; i++)
	{
		for (j = 0; j < 26; j++)
		{
			_putchar(str[j]);
		}
		_putchar('\n');
	}
}
