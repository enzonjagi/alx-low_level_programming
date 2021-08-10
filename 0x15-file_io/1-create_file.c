#include "main.h"

/**
 * create_file - creates a file
 * @filename: the name of the file
 * @text_content: the content to be written into the file
 * Return: 1 on success or -1 on error
 */

int create_file(const char *filename, char *text_content)
{
	int fd, i, count = 0;
	ssize_t wr;

	if (filename == NULL)
		return (-1);
	/*add a check; if file exists, truncate it*/
	fd = open(filename, O_CREAT | O_WRONLY | O_TRUNC, 0600);
	if (fd == -1)
		return (-1);
	if (text_content == NULL)
	{
		close(fd);
		return (1);
	}

	wr = write(fd, text_content, count);
	if (wr == -1)
		return (-1);

	close(fd);

	return (1);
}
