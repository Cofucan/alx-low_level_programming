#include <stdio.h>

/**
 * main - Entry point
 *
 * This is a simple C code,
 * it prints all hexadecimal numbers as strings,
 * using the putchar function.
 *
 * Return: 0
*/

int main(void)
{
	int i;

	for (i = 0; i < 16; i++)
	{
		if (i <= 9)
		{
			putchar(i + '0'); /* prints 0 - 9 as characters*/
		}
		else
		{
			putchar(i - 10 + 'a'); /* prints 10 - 15 as letters*/
		}
	}
	putchar('\n');

	return (0);
}
