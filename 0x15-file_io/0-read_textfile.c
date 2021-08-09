#include "main.h"
/**
 * read_textfile - reads a text file and prints it to the POSIX
 * stdout
 * @filename: the name of the file we are to read and print
 * @letters: the number of letter we're to read and print
 * Return: 0 for (NULL or failure) or the actual number of
 * letters printed out
 */
ssize_t read_textfile(const char *filename, size_t letters)
{
	int fd, i, count = 0;
	char *buf;

	if (filename == NULL)
		return (0);
	fd = open(filename, O_RDONLY);
	if (fd == -1)
		return (0);
	buf = malloc(sizeof(size_t) * letters + 1);
	if (buf == NULL)
		return (free(buf), 0);
	read(fd, buf, letters);
	/*buf[letters - 1] = '\0'*/
	close(fd);

	write(1, buf, letters);
	for (i = 0; buf[i] != '\0'; i++)
	{
		count++;
	}
	return (count);
}
