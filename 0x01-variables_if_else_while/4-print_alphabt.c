#include <stdio.h>
#include <string.h>

/**
 * main - Entry point
 *
 * This is a simple C code,
 * it prints out all the alphabets,
 * except for the lerrers e and q,
 * using the putchar function.
 *
 * Return: 0
*/

int main(void)
{
	int i;
	char alphabets[] = "abcdefghijklmnopqrstuvwxyz";

	for (i = 0; alphabets[i]; i++)
	{
		if ((alphabets[i] == 'e') | (alphabets[i] == 'q'))
			continue;
		putchar(alphabets[i]);
	}
	putchar('\n');

	return (0);
}
