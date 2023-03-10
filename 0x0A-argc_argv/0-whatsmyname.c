#include "main.h"
#include <stdio.h>
#include <stdlib.h>

/**
 * main - Entry point
 * @argc: Number of arguments passed
 * @argv: Vector containing arguments passed as strings
 *
 * Prints the name of the program.
 *
 * Return: On success 0.
 */
int main(int argc, char **argv)
{
	printf("%s\n", argv[argc - argc]);

	(void)argc;

	exit(EXIT_SUCCESS);
}
