# include <stdio.h>

/**
 * main - Entry point
 *
 * This is a simple C program,
 * Its a Fizz-Buzz program that prints,
 * numbers from 1 - 100.
 *
 * Return: Exit code 0
*/

int main(void)
{
	int u;

	for (u = 1; u <= 100; u++)
	{
		if ((u % 3 == 0) && (u % 5 != 0))
		{
			printf("Fizz");
		}
		else if ((u % 3 != 0) && (u % 5 == 0))
		{
			printf("Buzz");
		}
		else if ((u % 3 == 0) && (u % 5 == 0))
		{
			printf("FizzBuzz");
		}
		else
		{
			printf("%d", u);
		}

		if (u != 100)
			printf(" ");
	}
	printf("\n");

	return (0);
}
