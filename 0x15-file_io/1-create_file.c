#include "main.h"

/**
* create_file - creates a new file and writes content to it
* @filename: the name of the file to create
* @text_content: the content of the created file
* Return: 1 if Success, -1 if Failure.
*/

int create_file(const char *filename, char *text_content)
{
	int fd, fd1, size;
	mode_t mode = S_IRUSR | S_IWUSR;

	if (!filename)
		return (-1);

	fd = open(filename, O_CREAT | O_WRONLY | O_TRUNC, mode);

	if (fd == -1)
		return (-1);

	if (!text_content)
		text_content = "";

	for (size = 0; text_content[size]; size++)
		;

	fd1 = write(fd, text_content, size);
	if (fd1 == -1)
		return (-1);

	close(fd);
	return (1);
}
