#include "main.h"
#include <sys/uio.h>
#include <unistd.h>
#include <fcntl.h>
#include <stdio.h>
/**
 * main - Main function to copy files
 * @argc: The number of passed arguments
 * @argv: The pointers to array arguments
 * Return: 1 on success, exits on failure
 */
int main(int argc, char *argv[]);
int main(int argc, char *argv[])
{
	char buffer[1024];
	int bytes_read = 0, err_of = 1, fd_from = -1, to_fd = -1, error = 0;

	if (argc != 3)
	{
		dprintf(STDERR_FILENO, "Usage: cp file_from file_to\n");
		exit(97);
	}

	fd_from = open(argv[1], O_RDONLY);
	if (fd_from < 0)
	{
		dprintf(STDERR_FILENO, "Error: Can't read from file %s\n", argv[1]);
		exit(98);
	}

	to_fd = open(argv[2], O_WRONLY | O_TRUNC | O_CREAT, 0664);
	if (to_fd < 0)
	{
		dprintf(STDERR_FILENO, "Error: Can't write to %s\n", argv[2]);
		close_main(fd_from);
		exit(99);
	}

	while (err_of)
	{
		err_of = read(fd_from, buffer, 1024);
		if (err_of < 0)
		{
			dprintf(STDERR_FILENO, "Error: Can't read from file %s\n", argv[1]);
			close_main(fd_from);
			close_main(to_fd);
			exit(98);
		}
		else if (err_of == 0)
			break;
		bytes_read += err_of;
		error = write(to_fd, buffer, err_of);
		if (error < 0)
		{
			dprintf(STDERR_FILENO, "Error: Can't write to %s\n", argv[2]);
			close_main(fd_from);
			close_main(to_fd);
			exit(99);
		}
	}
	error = close_main(to_fd);
	if (error < 0)
	{
		close_main(fd_from);
		exit(100);
	}
	error = close_main(fd_from);
	if (error < 0)
		exit(100);
	return (0);
}

/**
 * close_main - A function that closes a file
 * @d: Description error for closed file
 * Return: 1 on success, -1 on failure
 */
int close_main(int d)
{
	int error;

	error = close(d);
	if (error < 0)
		dprintf(STDERR_FILENO, "Error: Can't close fd %d\n", d);
	return (error);
}
