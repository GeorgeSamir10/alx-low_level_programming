#include "main.h"

/**
* read_textfile - function to read text from file
* @filename: name of the file will be read from
* @letters: number of letters will be read from the file
* Return: number of bytes read
*/
ssize_t read_textfile(const char *filename, size_t letters)
{
	char *buff = (char *)malloc((letters + 1) * sizeof(char));
	int fd;
	ssize_t Bytes_Read, Bytes_Written;

	if (buff == NULL)
		return (0);
	if (filename == NULL)
		return (0);
	fd = open(filename, O_RDONLY);
	if (fd == -1)
		return (0);

	Bytes_Read = read(fd, buff, letters);

	if (Bytes_Read == -1)
		return (0);

	buff[Bytes_Read] = '\0';

	Bytes_Written = write(STDOUT_FILENO, buff, Bytes_Read);
	if (Bytes_Written != Bytes_Read)
	{
		close(fd);
		return (0);
	}

	close(fd);
	free(buff);
	return (Bytes_Read);
}
