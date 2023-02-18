#include <stdio.h>

/**
 * main - Entry point
 *
 * This is a C program,
 * it prints out all possible combinations,
 * of a pair of 2 two-digit numbers seperated by a space,
 * pairs seperated by a comma and only printing unique pairs,
 * as well as the smallest combination of pairs,
 * using the putchar function.
 *
 * It uses integer/floor division to get the 1st digit of a 2-digit number,
 * it uses modulus operation to get the 2nd digit of a 2-digit number.
 *
 * Return: 0
*/

int main(void)
{
	int x; /* First 2-digit number */
	int y; /* Second 2-digit number */

	int x1; /* First digit of x */
	int x2; /* Second digit of x */
	int y1; /* First digit of y */
	int y2; /* Second digit of x */


	for (x = 0; x <= 99; x++)
	{
		for (y = x + 1; y <= 99; y++)
		{
			x1 = x / 10;
			x2 = x % 10;
			y1 = y / 10;
			y2 = y % 10;

			putchar(x1 + '0');
			putchar(x2 + '0');
			putchar(' ');
			putchar(y1 + '0');
			putchar(y2 + '0');

			if ((x == 98) && (y == 99))
				continue;

			putchar(',');
			putchar(' ');
		}
	}
	putchar('\n');

	return (0);
}
