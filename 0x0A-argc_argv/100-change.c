#include "main.h"
#include <stdio.h>
#include <stdlib.h>

int calculate_coins(int change);

/**
 * main - Entry point
 * @argc: Number of arguments passed
 * @argv: Vector containing arguments passed as strings
 *
 * Calculates the minimum number of coins required to make change.
 *
 * Return: On success 0.
 */

int main(int argc, char **argv)
{
	/* Declare an integer to store the input number. */
	int num;
	/* Declare an integer to store the total number of coins. */
	int coins;

	/* Check that there is exactly one command-line argument. */
	if (argc != 2)
	{
		printf("Error\n");
		return (1);
	}

	num = atoi(argv[1]);

	/* Check that the input number is non-negative. */
	if (num < 0)
	{
		printf("0\n");
		return (0);
	}

	coins = calculate_coins(num);

	printf("%d\n", coins);

	exit(EXIT_SUCCESS);
}

/**
 * calculate_coins - Function
 * @change: Declare an integer to store the remaining change to be calculated.
 *
 * Calculates the minimum number of coins required to make change.
 *
 * Return: Minimum number of coins.
 */

int calculate_coins(int change)
{
	/* Declare an integer to store the total number of coins. */
	int coins = 0;
	/* Declare an array of coin denominations. */
	int values[] = {25, 10, 5, 2, 1};
	/* Declare a loop counter variable. */
	int c;
	/* Iterate through the coin denominations from largest to smallest. */
	for (c = 0; c < 5; c++)
	{
		/* If the remaining change is 0, exit the loop. */
		if (change == 0)
			break;
		/*
		 * If the remaining change is less than the current denomination,
		 * skip to the next denomination.
		 */
		else if (change < values[c])
			continue;
		/*
		 * Otherwise, calculate the number of coins needed for the
		 * current denomination,and update the remaining change accordingly.
		 */
		coins += change / values[c];
		change = change % values[c];
	}

	return (coins);
}
