#include "main.h"

/**
* create_file - creates a new file and writes content to it
* @filename: the name of the file to create
* @text_content: the content of the created file
* Return: 1 if Success, -1 if Failure.
*/

int create_file(const char *filename, char *text_content)
{
	int fd;
	ssize_t size = strlen(text_content);
	mode_t mode = S_IRUSR | S_IWUSR;

	if (filename == NULL)
		return (-1);

	if (size == -1)
	{
		perror("strlen");
		return (-1);
	}
	fd = open(filename, O_CREAT | O_WRONLY | O_TRUNC, mode);

	if (fd == -1)
	{
		perror("fails");
		return (-1);
	}

	if (text_content == NULL)
	{
		if (write(fd, "", 0) == -1)
		{
			perror("write");
			close(fd);
			return (-1);
		}
	}
	else
	{
		if (write(fd, text_content, size) != size)
		{
			perror("write");
			close(fd);
			return (-1);
		}
	}
	close(fd);
	return (1);
}
