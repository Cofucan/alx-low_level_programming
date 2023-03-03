#include "main.h"

/**
 * infinite_add - Entry point
 * @n1: First number to be added.
 * @n2: Second number to be added.
 * @r: buffer that will store result
 * @r_size: size of buffer
 *
 * This program adds two numbers.
 *
 * Return: Pointer to result buffer.
 */

char *infinite_add(char *n1, char *n2, char *r, int size_r)
{
	int n1_len = arr_len(n1);
	int n2_len = arr_len(n2);
	int longest;
	int sum, remainder;
	int carry = 0;
	int c; /* Counter for each digit added from the largest number */
	int d = 0; /* Counter for each digit added to the sum_reversed*/
	int e = 0; /* Counter for copying the reverseed sum digits to the r buffer */
	int reversed_len;

	if (n1_len > n2_len)
		longest = n1_len;
	else if (n2_len > n1_len)
		longest = n2_len;
	else
		longest = n1_len;

	char sum_reversed[longest + 3];

	for (c = longest - 1; c >= 0; c--)
	{
		if (n1_len == 0)
		{
			*(sum_reversed + d) = *(n2 + n2_len - 1);
			n2_len--;
			d++;
			continue;
		}
		else if (n2_len == 0)
		{
			*(sum_reversed + d) = *(n1 + n1_len - 1);
			n1_len--;
			d++;
			continue;
		}

		sum = (*(n2 + n2_len - 1) - '0') + (*(n1 + n1_len - 1) - '0');
		sum += carry;
		carry = 0;

		if (sum >= 10)
		{
			remainder = sum - 10;
			carry = 1;
		}
		else remainder = sum;

		*(sum_reversed + d) = remainder;

		n1_len--;
		n2_len--;
		d++;
	}

	if (carry == 1)
		*(sum_reversed + d) = carry - '0';
	d++;
	*(sum_reversed + d) = '\0';

	reversed_len = arr_len(sum_reversed);

	if (reversed_len >= size_r)
		return (0);

	for (; reversed_len > 0; reversed_len--)
	{
		*(r + e) = *(sum_reversed + (reversed_len - 1));
		e++;
	}
	*(r + e) = '\0';
	return (r);
}

int arr_len(char *str)
{
	int c = 0;

	while (str[c] != '\0')
		c++;
	
	return (c);
}