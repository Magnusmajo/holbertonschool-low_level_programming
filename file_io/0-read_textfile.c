#include "main.h"

/**
 * read_textfile - reads a text file and prints it
 * @filename: Entry filename
 * @letters: Entry n°of char in the file
 * Return: Number of char printed
 */
ssize_t read_textfile(const char *filename, size_t letters)
{
	int i, j;
	ssize_t s;
	char *c;

	if (!filename)
		return (0);

	i = open(filename, O_RDONLY);

	if (i == -1)
		return (0);

	c = malloc(letters);

	j = read(i, c, letters);

	if (j == -1)
	{
		free(c);
		close(i);
		return (0);
	}

	s = write(STDOUT_FILENO, c, j);

	if (s == -1)
	{
		free(c);
		close(i);
		return (0);
	}

	close(i);

	return (s);
}
