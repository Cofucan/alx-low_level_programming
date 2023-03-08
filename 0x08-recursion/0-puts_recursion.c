#include "main.h"

/**
 * _puts_recursion - Entry point.
 * @s: String to print.
 *
 * This is a function that prints a string,
 * using recursion.
 *
 * Return: Void.
 */
void _puts_recursion(char *s)
{
	if (*s == '\0')
	{
		_putchar('\n');
		return;
	}
	_putchar(*s);
	s++;
	_puts_recursion(s);
}
