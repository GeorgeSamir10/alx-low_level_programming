#include "main.h"

/**
* append_text_to_file - appends text to the end of a file
* @filename: name of file we will use
* @text_content: text to add to the file
* Return: 1 on success and -1 on failure
*/

int append_text_to_file(const char *filename, char *text_content)
{
	int fd1, fd2, size;

	if (!filename)
		return (-1);

	fd1 = open(filename, O_WRONLY | O_APPEND);

	if (fd1 == -1)
		return (-1);

	for (size = 0; text_content[size]; size++)
		;

	if (!text_content)
		return (-1)

	fd2 = write(fd1, text_content, size);

	if (fd2 == -1)
		return (-1);


	close(fd1);
	return (1);
}
