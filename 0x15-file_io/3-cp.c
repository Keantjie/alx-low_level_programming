#include "main.h"
#include <sys/uio.h>
#include <unistd.h>
#include <fcntl.h>
#include <stdio.h>
/**
 * main - Main function to copy files
 * @argc: The number of passed arguments
 * @argv: The pointers arguments
 * Return: 1 on success, exits on failure
 */
int main(int argc, char *argv[]);
int main(int argc, char *argv[])
{
	char buffer[1024];
	int byte = 0, err_f = 1, fd_from = -1, to_fd = -1, mistake = 0;

	if (argc != 3)
	{
		dprintf(STDERR_FILENO, "Usage: cp file_from file_to\n");
		exit(97);
	}

	fd_from = open(argv[1], O_RDONLY);
	if (fd_from < 0)
	{
		dprintf(STDERR_FILENO, "mistake: Can't read from file %s\n", argv[1]);
		exit(98);
	}

	to_fd = open(argv[2], O_WRONLY | O_TRUNC | O_CREAT, 0664);
	if (to_fd < 0)
	{
		dprintf(STDERR_FILENO, "mistake: Can't write to %s\n", argv[2]);
		close_main(fd_from);
		exit(99);
	}

	while (err_f)
	{
		err_f = read(fd_from, buffer, 1024);
		if (err_f < 0)
		{
			dprintf(STDERR_FILENO, "mistake: Can't read from file %s\n", argv[1]);
			close_main(fd_from);
			close_main(to_fd);
			exit(98);
		}
		else if (err_f == 0)
			break;
		byte += err_f;
		mistake = write(to_fd, buffer, err_f);
		if (mistake < 0)
		{
			dprintf(STDERR_FILENO, "mistake: Can't write to %s\n", argv[2]);
			close_main(fd_from);
			close_main(to_fd);
			exit(99);
		}
	}
	mistake = close_main(to_fd);
	if (mistake < 0)
	{
		close_main(fd_from);
		exit(100);
	}
	mistake = close_main(fd_from);
	if (mistake < 0)
		exit(100);
	return (0);
}

/**
 * close_main - A function that closes a file and prints
 * @d: Description mistake for closed file
 * Return: 1 on success, -1 on failure
 */
int close_main(int d)
{
	int mistake;

	mistake = close(d);
	if (mistake < 0)
		dprintf(STDERR_FILENO, "mistake: Can't close fd %d\n", d);
	return (mistake);
}
