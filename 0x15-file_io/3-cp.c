#include "main.h"

/**
 * print_error - Prints an error message to the standard error stream.
 *
 * @msg: The error message to print.
 * @file: the error message.
 *
 * Return: void.
 */

void print_error(char *msg, char *file)
{
	dprintf(STDERR_FILENO, "%s: %s\n", msg, file);
	exit(100);
}
/**
 * main - entry point
 *
 * @argc: The number of command-line arguments passed to the program.
 * @argv: An array of strings containing the command-line arguments.
 *
 * Return: An integer indicating the exit status of the program.
 */

int main(int argc, char **argv)
{
	int fd_from, fd_to, nread;
	char buffer[BUFFER_SIZE];

	if (argc != 3)
	{
		print_error("Usage", "cp file1 file2");
	}

	fd_from = open(argv[1], O_RDONLY);
	if (fd_from < 0)
	{
		print_error("Error: Can't open", argv[1]);
	}

	fd_to = open(argv[2], O_WRONLY | O_CREAT | O_TRUNC, 0644);
	if (fd_to < 0)
	{
		print_error("Error: Can't create", argv[2]);
	}

	while ((nread = read(fd_from, buffer, BUFFER_SIZE)) > 0)
	{
		if (write(fd_to, buffer, nread) != nread)
		{
			print_error("Error: Can't write to", argv[2]);
		}
	}
	if (nread < 0)
	{
		print_error("Error: Can't read from", argv[1]);
	}
	if (close(fd_from) < 0)
	{
		print_error("Error: Can't close fd", (void *)(intptr_t)fd_from);
	}
	if (close(fd_to) < 0)
	{
		print_error("Error: Can't close fd", (void *)(intptr_t)fd_to);
	}
	return (0);
}
