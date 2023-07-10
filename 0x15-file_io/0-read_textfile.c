#include "main.h"
#include <stdlib.h>

/**
 * read_textfile - reads a text file and prints it to the POSIX std output.
 * @filename: the name of the file to read.
 * @letters: the maximum number of letters to read from the file.
 *
 * Return: The no of bytes printed to std output or 0 if an error occurred.
 */
ssize_t read_textfile(const char *filename, size_t letters)
{
	int filedesc; /* file descriptor */
	ssize_t n_r, n_w;
	char *buf;  /* Buffer to store text */

	/* Check if the filename is NULL */
	if (filename == NULL)
		return (0);

	/* open file to read and store and store filedesc */
	filedesc = open(filename, O_RDONLY);
	if (filedesc == -1)
		return (0);

	/* Allocating malloc to buffer */
	buf = malloc(sizeof(char) * letters);
	if (buf == NULL)
		return (0);

	/* read from file and stores number of bytes read */
	n_r = read(filedesc, buf, letters);
	if (n_r == -1)
	{
		free(buf);
		close(filedesc);
		return (0);
	}

	/* write standard output and store the number of bytes written */
	n_w = write(STDOUT_FILENO, buf, n_r);
	if (n_w == -1)
	{
		free(buf);
		close(filedesc);
		return (0);
	}
	close(filedesc);
	return (n_r);

}

