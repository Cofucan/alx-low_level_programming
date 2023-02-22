#include <stdio.h>
#include <stdlib.h>

/**
 * main - Entry point
 *
 * Return: 0
*/

int main(void)
{
	unsigned long int i, n1 = 1, n2 = 2, n3, fn = 50;

	printf("%ld, %ld, ", n1, n2);
	for (i = 3; i <= fn; i++)
	{
		n3 = n1 + n2;
		if (i != fn)
		{
			printf("%ld, ", n3);
			n1 = n2;
			n2 = n3;
		}
		else
			printf("%ld", n3);
	}

	printf("\n");

	return (0);
}
