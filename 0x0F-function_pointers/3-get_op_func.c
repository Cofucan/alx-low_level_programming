#include <stdio.h>
#include <stdlib.h>
#include <string.h>
#include "3-calc.h"

/**
 * get_op_func - Returns a function based on operator chosen
 * @s: Operator
 *
 * Return: Pointer to function specified by operator.
 */

int (*get_op_func(char *s))(int, int)
{
	op_t ops[] = {
		{"+", op_add},
		{"-", op_sub},
		{"*", op_mul},
		{"/", op_div},
		{"%", op_mod},
		{NULL, NULL}
	};

	int i = 0;

	while (i < 5)
	{
		if ((strcmp(ops[i].op, s) == 0) && !(*(s + 1)))
			return (ops[i].f);
		i++;
	}

	return (NULL);
}
