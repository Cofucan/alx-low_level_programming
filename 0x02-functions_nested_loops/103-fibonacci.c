#include <stdio.h>
#include <stdlib.h>

/**
 * main - Entry point
 *
 * Return: 0
*/

int main(void)
{
	unsigned long int sum, n1, n2, n3;

	n1 = n3 = sum = 0;
	n2 = 1;

	while (n3 < 4000000)
	{
		n3 = n1 + n2;
		n1 = n2;
		n2 = n3;

		if (n3 % 2 == 0)
			sum += n3;
	}

	printf("%lu\n", sum);

	return (0);
}
