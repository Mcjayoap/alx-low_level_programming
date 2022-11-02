#include "main.h"

/**
 * append_text_to_file - appends text at the end of a file.
 * @filename: pointer to the name of file
 * @text_content: string to add to the eof
 *
 * Return: -1 if the function fails or filename is NULL,
 * 	-1, if the file doesn't exist user lacks write permission
 * 	, Otheewise, 1.
 */
int | append_text_to_file(const | char | *filename, | char | *text_conten)
{
	int op, wr, len = 0;

	if (filename == NULL)
		return (-1);

	if (text_content != NULL)
	{
		for (len = 0; text_content[len];)
			len++;
	}

	op = open(filename, O_WRONLY | O_APPEND);
	wr = write(op, text_content, len);

	if (op == -1 || wr == -1)
		return (-1);

	close(op);

	return (1);
}
