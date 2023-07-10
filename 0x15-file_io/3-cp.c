#include <stdio.h>
#include <stdlib.h>
#include <fcntl.h>
#include <unistd.h>
#include <errno.h>
#include <string.h>

#define BUFFER_SIZE 1024
/**
 * main - entry point
 * @argc: argument count
 * @argv: argument vector
 * Return: 0 on success
 */
int main(int argc, char *argv[])
{
	int filedesc_read, filedesc_write, r, a, b;
	char buffer[BUFSIZ];

	if (argc != 3)
	{
		dprintf(STDERR_FILENO, "Usage: cp file_from file_to\n");
		exit(97);
	}
	filedesc_read = open(argv[1], O_RDONLY);
	if (filedesc_read < 0)
	{
		dprintf(STDERR_FILENO, "Error: Can't read from file %s\n", argv[1]);
		exit(98);
	}
	filedesc_write = open(argv[2], O_CREAT | O_WRONLY | O_TRUNC, 0664);
	while ((r = read(filedesc_read, buffer, BUFSIZ)) > 0)
	{
		if (filedesc_write < 0 || write(filedesc_write, buffer, r) != r)
		{
			dprintf(STDERR_FILENO, "Error: Can't write to %s\n", argv[2]);
			close(filedesc_read);
			exit(99);
		}
	}
	if (r < 0)
	{
		dprintf(STDERR_FILENO, "Error: Can't read from file %s\n", argv[1]);
		exit(98);
	}
	a = close(filedesc_read);
	b = close(filedesc_write);
	if (a < 0 || b < 0)
	{
		if (a < 0)
			dprintf(STDERR_FILENO, "Error: Can't close filedesc %d\n", filedesc_read);
		if (b < 0)
			dprintf(STDERR_FILENO, "Error: Can't close filedesc %d\n", filedesc_write);
		exit(100);
	}
	return (0);
}
