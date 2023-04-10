#include <stddef.h>
#include <stdio.h>
#include <stdlib.h>
#include <unistd.h>
#include <fcntl.h>
#include "main.h"

unsigned long int _strlen(char *str);

/**
 * append_text_to_file - appends text to the end of a file
 * @filename: Name of the text file where the text should be appended
 * @text_content: Text that should be appended to the file
 *
 * Return: 1 if success or -1 if failure.
 */

int append_text_to_file(const char *filename, char *text_content)
{
	int file_desc, bytes_written;

	if (!filename)
		return (-1);

	file_desc = open(filename, O_WRONLY | O_APPEND);
	if (file_desc == -1)
		return (-1);

	if (text_content)
	{
		bytes_written = write(file_desc, text_content, _strlen(text_content));
		if (bytes_written == -1)
		{
			close(file_desc);
			return (-1);
		}

		if ((size_t)bytes_written != _strlen(text_content))
		{
			close(file_desc);
			return (-1);
		}
	}

	close(file_desc);
	return (1);
}

/**
 * _strlen - Finds the length of a non-empty array.
 * @str: Array to be counted
 *
 * Return: Number of characters.
 */

unsigned long int _strlen(char *str)
{
	unsigned long int len;

	for (len = 0; str[len]; len++)
	{};

	return (len);
}
