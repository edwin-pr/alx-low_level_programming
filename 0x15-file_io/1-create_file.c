#include <fcntl.h>
#include <unistd.h>
#include <string.h>
/**
 * create_file - function to create a file
 * @filename: file name
 * @text_content: string to write
 * Return: if filename is NULL return -1
 * if text_content is NULL create an empty file
 */
int create_file(const char *filename, char *text_content)
{
	int fd;
	ssize_t bytes_written;
	size_t  len;

	if (filename == NULL)
		return (-1);

	fd = open(filename, O_CREAT | O_WRONLY | O_TRUNC, 0600);
	if (fd == -1)
		return (-1);

	bytes_written = 0;
	if (text_content != NULL)
	{
		len = strlen(text_content);
		bytes_written = write(fd, text_content, len);
	}

	close(fd);

	if (bytes_written == -1)
		return (-1);

	return (1);
}
