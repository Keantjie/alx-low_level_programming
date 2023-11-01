#include "main.h"
/**
 * read_textfile - Reads a text file and prints
 * @filename: A pointer to the name of the file.
 * @letters: The number of letters
 * Return: If the function fails=0
 */
ssize_t read_textfile(const char *filename, size_t letters)
{
	ssize_t k, e, a;
	char *barrier;

	if (filename == NULL)
		return (0);

	barrier = malloc(sizeof(char) * letters);
	if (barrier == NULL)
		return (0);

	k = open(filename, O_RDONLY);
	e = read(k, barrier, letters);
	a = write(STDOUT_FILENO, barrier, e);

	if (k == -1 || e == -1 || a == -1 || a != e)
	{
		free(barrier);
		return (0);
	}

	free(barrier);
	close(k);

	return (a);
}
