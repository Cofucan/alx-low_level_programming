#include "main.h"
#include <stdio.h>
#include <stdlib.h>

void multiply(char *num1, int len1, char *num2, int len2, char *arr);
int only_digits(char *num);
int _strlen(char *str);
void _memset(char *arr, int size);
void _print(char *arr);

/**
 * main - Entry point
 * @argc: Number of arguments passed
 * @argv: Vector containing arguments passed as strings
 *
 * Return: Exit status 0 or 98.
 */

int main(int argc, char *argv[])
{
	int c, len1, len2;
	char *num1, *num2, *result;
	char err[] = "Error\n";

	if (argc != 3 || !only_digits(argv[1]) || !only_digits(argv[2]))
	{
		for (c = 0; err[c]; c++)
			_putchar(err[c]);
		exit(98);
	}

	num1 = argv[1];
	num2 = argv[2];

	len1 = _strlen(num1);
	len2 = _strlen(num2);

	/* Allocate memory for the result array */
	result = (char *)malloc(len1 + len2 + 1);
	if (result == NULL)
	{
		for (c = 0; err[c]; c++)
			_putchar(err[c]);
		exit(98);
	}

	/* Initialize the result array with zeros */
	_memset(result, len1 + len2);

	/* Multiply the two numbers digit by digit */
	multiply(num1, len1, num2, len2, result);

	/* Print the result */
	_print(result);

	/* Free the memory allocated for the result array */
	free(result);

	return (0);
}

/**
 * multiply - Multiplies two numbers stored as character arrays
 * @num1: Number to multiply
 * @num2: Number to multiply with
 * @len1: Length of first number
 * @len2: Length of second number
 * @arr: Address to store result of multiplication
 *
 * Return: Address containing result of characters for each digit
 */

void multiply(char *num1, int len1, char *num2, int len2, char *arr)
{
	int i, j;
	int carry, temp;

	for (i = len1 - 1; i >= 0; i--)
	{
		carry = 0;
		for (j = len2 - 1; j >= 0; j--)
		{
			temp = (num1[i] - '0') * (num2[j] - '0') + carry + (arr[i + j + 1] - '0');
			carry = temp / 10;
			arr[i + j + 1] = temp % 10 + '0';
		}
		arr[i] += carry;
	}
}

/**
 * only_digits - Checks to see if a string contains only numeric characters
 * @num: Array to check
 *
 * Return: 1 or 0
 */

int only_digits(char *num)
{
	int c;

	for (c = 0; num[c]; c++)
		if (num[c] < '0' || num[c] > '9')
			return (0);
	return (1);
}

/**
 * _strlen - Counts the number of of elements in an array
 * @str: Array to check
 *
 * Return: Length of array
 */

int _strlen(char *str)
{
	int c;

	for (c = 0; str[c]; c++)
		continue;
	return (c);
}

/**
 * _memset - Sets all bytes in an array to 0
 * @arr: Array to initialize
 * @size: Size of array to be initialized
 *
 * Return: Void
 */

void _memset(char *arr, int size)
{
	int m;

	for (m = 0; m < size; m++)
		arr[m] = '0';
	arr[m] = '\0';
}

/**
 * _print - Prints all characters starting with the first non-zero character
 * @arr: Array to print
 *
 * Return: Void
 */

void _print(char *arr)
{
	int c = 0;
	char *start = arr;

	while (start[c] == '0')
		c++;

	while (arr[c])
	{
		_putchar(arr[c]);
		c++;
	}
	_putchar('\n');
}
