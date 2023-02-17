#include <stdio.h>
#include <string.h>

/**
 * main - Entry point
 *
 * This is a simple C code,
 * it prints all alphabets in lowercase,
 * using the putchar function.
 *
 * Return: 0
*/

int main(void)
{
	char alphabets[] = "abcdefghijklmnopqrstuvwxyz";
	int len = strlen(alphabets);
	int i;

	for (i = 0; i < len; i++)
	{
		putchar(alphabets[i]);
	}
	putchar('\n');

	return (0);
}
