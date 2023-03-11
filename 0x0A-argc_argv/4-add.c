#include <stdlib.h>
#include <stdio.h>
#include <ctype.h>
#include <stdbool.h>
#include "main.h"

bool is_num(char *num);

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

	if (argc == 1)
	{
		printf("0\n");
		return (0);
	}

	for (i = 1; i < argc; i++)
	{
		if (!is_num(argv[i]))
		{
			printf("%s\n", "Error");
			return (1);
		}
		sum += atoi(argv[i]);
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
	if (*num == '-') /* If string starts with a minus sign, go on to next char */
		num++;

	while (*num)
	{
		if (!isdigit(*num))
			return (false);
		num++;
	}
	return (true);
}
