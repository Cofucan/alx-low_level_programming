#include <stdio.h>
#include <stdlib.h>
#include <unistd.h>
#include <fcntl.h>
#include "main.h"

/**
 * read_textfile - reads a text file and prints it to the POSIX standard output
 * @filename: Name of the text file to be read
 * @letters: Number of letters that should be read and printed
 *
 * Return: Actual number of letters it could read and print
 */

ssize_t read_textfile(const char *filename, size_t letters)
{
	int bytes_read, bytes_written, file_desc;
	char *buff;

	if (!filename)
		return (0);

	buff = malloc(sizeof(char) * letters + 1); /* Allocate buff for reading */
	if (!buff)
		return (0);

	file_desc = open(filename, O_RDONLY); /* Open file for reading only */
	if (file_desc == -1)
	{
		free(buff);
		return (0);
	}

	bytes_read = read(file_desc, buff, letters); /* Read file into buffer */
	if (bytes_read == -1)
	{
		free(buff);
		close(file_desc);
		return (0);
	}

	/* Write the buffer to stdout */
	bytes_written = write(STDOUT_FILENO, buff, bytes_read);
	if (bytes_written == -1 || ((size_t)bytes_written != (size_t)bytes_read))
	{
		free(buff);
		close(file_desc);
		return (0);
	}

	/* After writing to terminal, free buffer and close file descriptor */
	free(buff);
	close(file_desc);

	return (bytes_written);
}
