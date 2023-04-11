#include <stddef.h>
#include <stdio.h>
#include <stdlib.h>
#include <unistd.h>
#include <fcntl.h>
#include "main.h"

int copy_file(char **arguments);

/**
 * main - Entry point
 * @argc: Number of arguments passed to program (including program name)
 * @argv: Vector containing all arguments passed
 *
 * Return: 0 if success or -1 if failure.
 */

int main(int argc, char **argv)
{
	char *usage = "Usage: %s file_from file_to\n";
	char *file_not_exist = "Error: Can't read from file %s\n";

	if (argc != 3)
	{
		dprintf(STDERR_FILENO, usage, "cp");
		exit(97);
	}

	if (!argv[1][0])
	{
		dprintf(STDERR_FILENO, file_not_exist, argv[1]);
		exit(98);
	}

	copy_file(argv);

	return (0);
}

/**
 * copy_file - copies contents of a file to another file
 * @arguments: Vector containing file to copy from and file to copy to
 *
 * Return: 0 if success
 */

int copy_file(char **arguments)
{
	char buff[BUFF_SIZE];
	char *cant_read = "Error: Can't read from file %s\n";
	char *cant_write = "Error: Can't write to %s\n";
	char *cant_close = "Error: Can't close fd %d\n";
	char *file_from = arguments[1];
	char *file_to = arguments[2];
	int file_from_fd, file_to_fd, bytes_read, bytes_written;

	file_from_fd = open(file_from, O_RDONLY);
	if (file_from_fd == -1)
	{
		dprintf(STDERR_FILENO, cant_read, file_from);
		exit(98);
	}
	file_to_fd = open(file_to, O_WRONLY | O_CREAT | O_TRUNC | O_APPEND, 0664);
	if (file_to_fd == -1)
	{
		if (close(file_from_fd) == -1)
		{
			dprintf(STDERR_FILENO, cant_close, file_from_fd);
			exit(100);
		}
		dprintf(STDERR_FILENO, cant_write, file_to);
		exit(99);
	}

	do {
		bytes_read = read(file_from_fd, buff, BUFF_SIZE);
		/* Might need to handle this outside before trying to read from it */
		if (file_from_fd == -1 || bytes_read == -1)
		{
			if (close(file_from_fd) == -1)
			{
				dprintf(STDERR_FILENO, cant_close, file_from_fd);
				exit(100);
			}
			if (close(file_to_fd) == -1)
			{
				dprintf(STDERR_FILENO, cant_close, file_to_fd);
				exit(100);
			}
			dprintf(STDERR_FILENO, cant_read, file_from);
			exit(98);
		}

		bytes_written = write(file_to_fd, buff, bytes_read);
		if (file_to_fd == -1 || bytes_written == -1)
		{
			if (close(file_from_fd) == -1)
			{
				dprintf(STDERR_FILENO, cant_close, file_from_fd);
				exit(100);
			}
			if (close(file_to_fd) == -1)
			{
				dprintf(STDERR_FILENO, cant_close, file_to_fd);
				exit(100);
			}

			dprintf(STDERR_FILENO, cant_write, file_to);
			exit(99);
		}
	} while (bytes_read > 0);

	if (close(file_from_fd) == -1)
	{
		dprintf(STDERR_FILENO, cant_close, file_from_fd);
		exit(100);
	}
	else if (close(file_to_fd) == -1)
	{
		dprintf(STDERR_FILENO, cant_close, file_to_fd);
		exit(100);
	}

	return (0);
}
