#include "main.h"
#include <stdio.h>
#include <stdlib.h>

/**
 * main - Entry point
 * @argc: Number of arguments passed
 * @argv: Vector containing arguments passed as strings
 *
 * Prints all arguments passed, including name of program.
 *
 * Return: On success 0.
 */
int main(int argc, char **argv)
{
	int c;

	for (c = 0; c < argc; c++)
		printf("%s\n", argv[c]);

	exit(EXIT_SUCCESS);
}
