#include "main.h"

/**
 * infinite_add - add 2 numbers together
 * @n1: text representation of 1st number to add
 * @n2: text representation of 2nd number to add
 * @r: pointer to buffer
 * @size_r: buffer size
 * Return: pointer to calling function
 */

char *infinite_add(char *n1, char *n2, char *r, int size_r)
{
	int n1_len = arr_len(n1);
	int n2_len = arr_len(n2);
	int longest; /* Length of the longest string of numbers */
	int sum, remainder;
	int carry = 0;
	int c; /* Counter for each digit added from the largest number */
	int d; /* Counter for each digit added to the buffer */
	int e; /* Counter for copying the reversed sum digits to the r buffer */
	char temp; /* Temporary variable to store number while reversing array */

	/* Find the longest of the two arrays */
	if (n1_len > n2_len)
		longest = n1_len;
	else if (n2_len > n1_len)
		longest = n2_len;
	else
		longest = n1_len;

	for (c = longest - 1, d = 0; c >= 0; c--, d++, n1_len--, n2_len--)
	{
		if (n1_len <= 0)
			sum = *(n2 + n2_len - 1) - '0';
		else if (n2_len <= 0)
			sum = *(n1 + n1_len - 1) - '0';
		else
			sum = (*(n2 + n2_len - 1) - '0') + (*(n1 + n1_len - 1) - '0');

		sum += carry;
		carry = 0;

		if (sum >= 10)
		{
			remainder = sum - 10;
			carry = 1;
		}
		else
			remainder = sum;

		*(r + d) = remainder + '0';
	}

	if (longest + carry >= size_r)
		return (0);

	/* If there is a carry at the end of the sum, add 1 to the buffer */
	if (carry)
		r[d] = '1';

	/* Reverse the numbers in the buffer */
	for (e = 0; e < (longest / 2); e++)
	{
		temp = *(r + longest - e);
		*(r + longest - e) = *(r + e);
		*(r + e) = temp;
	}

	/* *(r + e) = '\0'; */
	return (r);
}

int arr_len(char *str)
{
	int c = 0;

	while (str[c] != '\0')
		c++;

	return (c);
}
