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

	int filedesc;

	ssize_t b_w;

	size_t  len;



	if (filename == NULL)

		return (-1);



	filedesc = open(filename, O_CREAT | O_WRONLY | O_TRUNC, 0600);

	if (filedesc == -1)

		return (-1);



	b_w = 0;

	if (text_content != NULL)

	{

		len = strlen(text_content);

		b_w = write(filedesc, text_content, len);

	}



	close(filedesc);



	if (b_w == -1)

		return (-1);



	return (1);

}
