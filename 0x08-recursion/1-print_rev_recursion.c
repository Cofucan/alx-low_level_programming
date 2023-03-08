#include "main.h"

/**
 * _print_rev_recursion - Entry point.
 * @s: String to print in reverse.
 *
 * This is a function that prints a string,
 * in reverse, using recursion.
 *
 * Return: Void.
 */
void _print_rev_recursion(char *s)
{
	if (*s == '\0')
	{
		return;
	}
	_print_rev_recursion(s + 1);
	_putchar(*s);
}
