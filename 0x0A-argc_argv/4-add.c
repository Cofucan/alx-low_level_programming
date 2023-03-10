#include "main.h"
#include <stdio.h>
#include <stdlib.h>
#include <stdbool.h>
#include <ctype.h>

bool is_num(char *num);

/**
 * main - Entry point
 * @argc: Number of arguments passed
 * @argv: Vector containing arguments passed as strings
 *
 * Adds all positive numbers passed as arguments.
 *
 * Return: On success 0, or 1 if invalid or no number is passed in.
 */

int main(int argc, char **argv)
{
	int u = 1;
	int sum = 0;

	if (argc == 1)
	{
		printf("0\n");
		return (1);
	}

	while (argv[u])
	{
		if (!is_num(argv[u]))
		{
			printf("Error\n");
			return (1);
		}
		sum += atoi(argv[u]);
		u++;
	}

	printf("%d\n", sum);

	exit(EXIT_SUCCESS);
}

/**
 * is_num - Function
 * @num: String to check if its a number
 *
 * Checks if a string contains only digits.
 *
 * Return: true or false.
 */

bool is_num(char *num)
{
	while (*num)
	{
		if (!isdigit(*num))
			return (false);
		num++;
	}
	return (true);
}
