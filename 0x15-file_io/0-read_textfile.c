#include "main.h"
/**
 * read_textfile - reads a text file and prints it
 *  to the POSIX standard output.
 * @filename: pointer to the name of file
 * @letters: the number;of letters
 * 	 the function should read
 * 
 * Return: if function fails or filename is NULL - 0.
 * 	else, the actual number of bytes function can read and print
 */
ssize_t read_textfile(const char *filename, size_t letters)
{
	ssize_t op, rd, wr;
	char buf;

	if (buf == NULL)
		return (0);
	buf = malloc(sizeof(char) * letters);

	if (filename == NULL)
		return (0);

	op = open(filename, O_RDONLY);
	rd = read(op, buf, letters);
	wr = write(STDOUT_FILENO, buf, rd);

	if (op == -1 || rd == -1 || wr == -1 || rd != wr)
	{
		free(buf);
		return (0);
	}

	free(buf);
	close(0);

	return (wr);
}
