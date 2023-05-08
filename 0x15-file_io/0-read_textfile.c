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
	int fd; /* file descriptor */
	ssize_t num_read, num_write;
	char *buf;  /* Buffer to store text */

	/* Check if the filename is NULL */
	if (filename == NULL)
		return (0);

	/* open file to read and store and store fd */
	fd = open(filename, O_RDONLY);
	if (fd == -1)
		return (0);

	/* Allocating malloc to buffer */
	buf = malloc(sizeof(char) * letters);
	if (buf == NULL)
		return (0);

	/* read from file and stores number of bytes read */
	num_read = read(fd, buf, letters);
	if (num_read == -1)
	{
		free(buf);
		close(fd);
		return (0);
	}

	/* write standard output and store the number of bytes written */
	num_write = write(STDOUT_FILENO, buf, num_read);
	if (num_write == -1)
	{
		free(buf);
		close(fd);
		return (0);
	}
	close(fd);
	return (num_read);

}
