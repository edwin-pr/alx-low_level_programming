#include <stdio.h>
#include <stdlib.h>
#include <unistd.h>
/**
 * read_textfile - function that reads a text file and prints it to the POSIX
 * @filename: file name
 * @letters: characters
 * Return: filename is NULL return 0
 * if write fails or does not write the expected amount of bytes, return 0
 */
ssize_t read_textfile(const char *filename, size_t letters)
{
	FILE *file;
	char *buffer;
	ssize_t bytes_read;
	ssize_t bytes_written;

	if (filename == NULL)
	{
		return (0);
	}

	file = fopen(filename, "r");
	if (file == NULL)
	{
		return (0);
	}

	buffer = malloc(letters * sizeof(char));
	if (buffer == NULL)
	{
		fclose(file);
		return (0);
	}

	bytes_read = fread(buffer, sizeof(char), letters, file);
	if (bytes_read == -1)
	{
		fclose(file);
		free(buffer);
		return (0);
	}

	bytes_written = write(STDOUT_FILENO, buffer, bytes_read);
	if (bytes_written != bytes_read)
	{
		fclose(file);
		free(buffer);
		return (0);
	}

	fclose(file);
	free(buffer);
	return (bytes_written);
}
