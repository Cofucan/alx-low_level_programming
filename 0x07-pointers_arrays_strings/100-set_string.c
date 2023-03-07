#include "main.h"

/**
 * set_string - Entry point
 * @s: Pointer to change.
 * @to: Type to change the pointer to.
 *
 * This sets the value of a pointer to a char.
 *
 * Return: Void
 */

void set_string(char **s, char *to)
{
	*s = to;
}
