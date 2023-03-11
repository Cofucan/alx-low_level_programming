#include <stdlib.h>
#include <stdio.h>
#include <ctype.h>
#include "main.h"

/**
* main - add positive numbers
* @argc: arguement count
* @argv: arguement vectors
*
* Return: Always 0 (succes)
*/

int main(int argc, char *argv[])
{
	int i, sum = 0;

	if (argc < 1)
	{
		return (0);
	}
	else
	{
		for (i = 1; i < argc; i++)
		{
			if (isalpha(*argv[i]) != 0)
			{
				printf("%s\n", "Error");
				return (1);
			}
			sum += atoi(argv[i]);
		}

		printf("%d\n", sum);
	}

	exit(EXIT_SUCCESS);
}
