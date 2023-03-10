#include "main.h"
#include <stdio.h>
#include <stdlib.h>

/**
 * main - Entry point
 * @argc: Number of arguments passed
 * @argv: Vector containing arguments passed as strings
 *
 * Prints the number of arguments passed.
 *
 * Return: On success 0.
 */
int main(int argc, char **argv)
{
	printf("%d\n", argc - 1);

	(void)argv;

	exit(EXIT_SUCCESS);
}
