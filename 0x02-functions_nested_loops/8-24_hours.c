# include "main.h"

/**
 * jack_bauer - Entry point
 *
 * This is a C function.
 * It prints every minure from 00:00 to 00:24.
 *
 * Return: integer
*/

void jack_bauer(void)
{
	int hour, minute;

	for (hour = 0; hour <= 23; hour++)
	{
		for (minute = 0; minute <= 59; minute++)
		{
			_putchar((hour / 10) + '0');
			_putchar((hour % 10) + '0');
			_putchar(':');
			_putchar((minute / 10) + '0');
			_putchar((minute % 10) + '0');
			_putchar('\n');
		}
	}
}
