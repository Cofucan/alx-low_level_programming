#include "main.h"
/**
 * _atoi - converts a string to an integer.
 * @s: the string to convert
 * Return: the coverted string / 0 is Success.
 */
int _atoi(char *s)
{
	short check;
	int i, sign, number;

	i = sign = number = check = 0;
	sign = -1;

	while (s[i] != '\0')
	{
		if (s[i] == '-')
			sign *= -1;

		if (s[i] >= '0' && s[i] <= '9')
		{
			number *= 10;
			number -= (s[i] - '0');
			check = 1;
		}
		else if (check == 1)
			break;
		i++;
	}
	number *= sign;

	return (number);
}
