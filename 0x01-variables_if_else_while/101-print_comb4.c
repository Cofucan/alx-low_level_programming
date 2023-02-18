#include <stdio.h>

/**
 * main - Entry point
 *
 * This is a C program,
 * it prints out all possible combinations of three digit numbers,
 * seperated by a comma and only printing unique pairs,
 * as well as the smallest combination of pairs,
 * using the putchar function.
 *
 * Return: 0
*/

int main(void)
{
	int x;
	int y;
	int z;

	for (x = 0; x <= 9; x++)
	{
		for (y = 0; y <= 9; y++)
		{
			for (z = 0; z <= 9; z++)
			{
				if ((x >= y) | (y >= z))
					continue;

				putchar(x + '0');
				putchar(y + '0');
				putchar(z + '0');

				if ((x == 7) && (y == 8) && (z == 9))
					continue;

				putchar(',');
				putchar(' ');
			}
		}
	}
	putchar('\n');

	return (0);
}
