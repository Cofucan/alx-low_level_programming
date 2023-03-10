#include "main.h"
#include <stdio.h>
#include <stdlib.h>

/**
 * main - Entry point
 * @argc: Number of arguments passed
 * @argv: Vector containing arguments passed as strings
 *
 * Multiplies two numbers passed as arguments.
 *
 * Return: On success 0, or 1 if number of arguments is not exactly two.
 */
int main(int argc, char **argv)
{
	int a, b;

	if (argc != 3)
	{
		printf("Error\n");
		return (1);
	}

	a = atoi(argv[1]);
	b = atoi(argv[2]);

	printf("%d\n", a * b);

	exit(EXIT_SUCCESS);
}
