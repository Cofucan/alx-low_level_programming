#include <stdio.h>
#include <unistd.h>

/**
 * main - Entry point
 *
 * This is a simple C code,
 * it prints out a text to standard error
 * without using the printf nor puts function
 *
 * Return: Exactly 0
*/

int main(void)
{
	const char msg[] = "and that piece of art is useful\" - Dora Korpar, 2015-10-19\n";
	const int len = sizeof(msg) - 1; /* exclude null terminator */
	write(STDERR_FILENO, msg, len);

	return (1); /* return a non-zero value to indicate failure */
}

