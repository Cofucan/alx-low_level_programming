#include <stdio.h>
#include <stdlib.h>
#include "3-calc.h"

/**
 * main - Entry point/
 * @argc: Number of arguments passed into the program
 * @argv: Vector containg all arguments passed
 *
 * Return: Exit status 0 if successful or 98/99/100 if not.
 */

int main(int argc, char *argv[])
{
	int (*op_func)(int, int);
	char *op;
	int num_a;
	int num_b;
	int result;

	if (argc != 4)
	{
		printf("Error\n");
		exit(98);
	}

	op = argv[2];

	op_func = get_op_func(op);
	if (!op_func)
	{
		printf("Error\n");
		exit(99);
	}

	num_a = atoi(argv[1]);
	num_b = atoi(argv[3]);

	if (((*op == '/') || (*op == '%')) && num_b == 0)
	{
		printf("Error\n");
		exit(100);
	}

	result = op_func(num_a, num_b);

	printf("%d\n", result);

	return (0);
}
