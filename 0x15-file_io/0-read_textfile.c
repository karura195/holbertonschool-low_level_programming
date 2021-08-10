#include "main.h"

/**
 * read_textfile - reads a text file and prints it
 * to the POSIX standard output
 * @filename: name of the file to read
 * @letters: length of the file
 *
 * Return: 0 if fails, the length if succeeds
 */

ssize_t read_textfile(const char *filename, size_t letters)
{
	ssize_t fd, fdr, fdw;
	char *buf;

	if (filename == NULL)
	{
		return (0);
	}
	buf = malloc(letters * sizeof(char));
	if (buf == NULL)
	{
		return (0);
	}
	fd = open(filename, O_RDONLY);
	fdr = read(fd, buf, letters);
	fdw = write(STDOUT_FILENO, buf, fdr);

	if (fd == -1 || fdr == -1 || fdw == -1 || fdr != fdw)
	{
		free(buf);
		return (0);
	}
	free(buf);
	close(fd);
	return (fdw);
}
