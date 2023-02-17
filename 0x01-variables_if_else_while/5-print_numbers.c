#include <stdio.h>

/**
 * main - Entry point
 *
 * This is a simple C code,
 * it prints out all numbers from 0 - 9,
 * using the printf function.
 *
 * Return: 0
*/

int main(void)
{
	int i = 0;

	while (i <= 9)
	{
		printf("%d", i);
		i++;
	}
	putchar('\n');

	return (0);
}
