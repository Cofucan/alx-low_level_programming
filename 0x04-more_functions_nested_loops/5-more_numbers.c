# include "main.h"

/**
 * more_numbers - Entry point
 *
 * This is a simple C code,
 * It prints 10 times the numbers,
 * from 0 - 14.
 *
 * Return: nothing
*/

void more_numbers(void)
{
	int i, u, v;
	char nums[] = "1011121314";

	for (i = 0; i < 10; i++)
	{
		for (u = '0'; u <= '9'; u++)
		{
			_putchar(u);
		}
		for (v = 0; v <= 10; v++)
		{
			_putchar(nums[v]);
		}
		_putchar('\n');
	}
}
