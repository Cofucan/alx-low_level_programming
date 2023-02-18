#include <stdio.h>

/**
 * main - Entry point
 *
 * This is a simple C code,
 * it prints out all numbers from 0 - 9,
 * using the putchar function.
 *
 * It does this by adding each integer,
 * to the integer value of the ASCII code for '0' which is 48.
 * This enables it to print the character representation,
 * of each integer.
 *
 * Return: 0
*/

int main(void)
{
	int i = 0;

	while (i <= 9)
	{
		putchar(i + '0');
		i++;
	}
	putchar('\n');

	return (0);
}
