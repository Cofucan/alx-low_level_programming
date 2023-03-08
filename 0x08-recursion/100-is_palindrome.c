#include "main.h"

int check_pal(char *s, int a, int b);

/**
 * is_palindrome - Entry point.
 * @s: String to check.
 *
 * This function checks if a string is a palindrome,
 * using recursion.
 *
 * Return: 1 or 0.
 */

int is_palindrome(char *s)
{
	/* If s is an empty string */
	if (*s == '\0')
		return (1);

	/* If s is just one character */
	if (*(s + 1) == '\0')
		return (1);

	/* If s is two characters and both are the same */
	if (s[0] == s[1] && s[2] == '\0')
		return (1);

	return (check_pal(s, 0, _strlen_recursion(s) - 1));
}

/**
 * _strlen_recursion - Function.
 * @s: String to count length of.
 *
 * This function returns the length of a string,
 * using recursion.
 *
 * Return: Length of string (integer).
 */

int _strlen_recursion(char *s)
{
	if (*s == '\0')
		return (0);

	return (1 + _strlen_recursion(s + 1));
}

/**
 * check_pal - Function.
 * @s: String to check.
 * @a: Left index of string to compare.
 * @b: Right index of string to compare.
 *
 * This function checks if a string is a palindrome,
 * using recursion.
 *
 * Return: 1 or 0.
 */

int check_pal(char *s, int a, int b)
{
	if (a >= b)
		return (1);

	if (s[a] == s[b])
		return (check_pal(s, a + 1, b - 1));

	return (0);
}
