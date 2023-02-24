#include <stdio.h>
#include <math.h>

/**
 * main - Entry point
 *
 * This is a C program.
 * It prints the largest prime factor.
 * of a very large number.
 *
 * Return: Exactly 0.
*/

int main(void)
{
	long int num, lower, check;

	num = 612852475143;
	lower = 2;
	check = 2;

	while (num > check)
	{
		if (num % check == 0)
		{
			lower = check;
			num = num / lower;
			check = lower + 1;
		}
		else
			check++;
	}
	printf("%ld\n", num);

	return (0);
}
