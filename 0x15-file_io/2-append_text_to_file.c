#include "main.h"



/**
 * append_text_to_file - it appends text at the end of a file

 * @filename: the name of the file

 * @text_content: the text to add at the end of the file

 *

 * Return: 1 on success, -1 on failure

 */

int append_text_to_file(const char *filename, char *text_content)
{

	int filedesc, r, len;



	if (!filename)

		return (-1);



	filedesc = open(filename, O_WRONLY | O_APPEND);

	if (filedesc == -1)

		return (-1);



	if (text_content)

	{

		len = 0;

		while (text_content[len])

			len++;



		r = write(filedesc, text_content, len);

		if (r == -1)

		{

			close(filedesc);

			return (-1);

		}

	}



	close(filedesc);

	return (1);

}
