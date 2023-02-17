#include <stdio.h>
#include <string.h>
#include <ctype.h>

/**
 * main - Entry point
 *
 * This is a simple C code,
 * it prints out all the alphabets,
 * in lowercase and upper case,
 * using the putchar function
 *
 * Return: 0
*/

int main(void)
{
	int i;
	char u;
	char alphabets[] = "abcdefghijklmnopqrstuvwxyz";

	for (i = 0; alphabets[i]; i++)
	{
		putchar(alphabets[i]);
	}
	for (i = 0; alphabets[i]; i++)
	{
		u = toupper(alphabets[i]);
		putchar(u);
	}
	putchar('\n');

	return (0);
}
