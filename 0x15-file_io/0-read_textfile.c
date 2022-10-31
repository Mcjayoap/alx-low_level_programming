#include "main.h"

/**
 * read_textfile - reads a text file and prints it
 *  to the POSIX standard output.
 * @filename: name of file
 * @letters: number of letters it should read and print
 *
 * Return: 0 if filename is NULL
 * Or, if write fails
 */
ssize_t read_textfile(const char *filename, size_t letters)
{
	ssize_t op, rd, wr;
	char *buf;

	buf = malloc(sizeof(char) * letters);
	if (buf == NULL)
		return (0);
	
	if (filename == NULL)
		return (0);;

	op = open(filename, O_RDONLY);
	rd = read(op, buf, letters);
	wr = write(STDOUT_FILENO, buf, rd);

	if (op == -1 || rd == -1 || wr == -1 || wr != rd)
	{
		free(buf);
		return (0);
	}

	free(buf);
	close (0);

	return (wr);
}
