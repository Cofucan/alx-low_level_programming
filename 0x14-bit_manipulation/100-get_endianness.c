#include <stdio.h>
#include "main.h"

/**
 * get_endianness - checks the order in which the bytes of a
 *					multibyte data type are stored in memory
 *
 * Return: 0 if big endian or 1 if little endian
 */

int get_endianness(void)
{
	unsigned int data = 0x98765432;
	unsigned char *bytes = (unsigned char *)&data;

	if
		((bytes[0] == 0x98) &&
		(bytes[1] == 0x76) &&
		(bytes[2] == 0x54) &&
		(bytes[3] == 0x32))
		return (0);
	else if
		((bytes[0] == 0x32) &&
		(bytes[1] == 0x54) &&
		(bytes[2] == 0x76) &&
		(bytes[3] == 0x98))
		return (1);

	return (-1);
}
