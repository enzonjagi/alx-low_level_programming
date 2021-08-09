#include "main.h"

/**
 * append_text_to_file - appends text to end of a file
 * @filename: the name of the file
 * @text_content: the content to be written into the file
 * Return: 1 on success or -1 on error
 */

int append_text_to_file(const char *filename, char *text_content)
{
	int fd, i, count = 0;

	if (filename == NULL)
		return (-1);
	/*add a check; if file exists, truncate it*/
	fd = open(filename, O_WRONLY | O_APPEND, 0600);
	if (fd == -1)
		return (-1);
	if (text_content == NULL)
	{
		close(fd);
		return (1);
	}
	for (i = 0; text_content[i] != '\0'; i++)
		count++;
	write(fd, text_content, count);

	close(fd);

	return (1);
}
