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
	int fd;
	ssize_t rd, wr;
	char *buf;

	if (filename == NULL)
		return (0);
	fd = open(filename, O_RDWR);
	if (fd == -1)
		return (0);
	buf = malloc(sizeof(size_t) * letters);
	if (buf == NULL)
		return (free(buf), 0);
	rd = read(fd, buf, letters);
	/*check if read fails*/
	if (rd == -1)
		return (0);

	close(fd);

	wr = write(STDOUT_FILENO, buf, rd);
	if (wr == -1)
		return (0);

	free(buf);

	return (wr);
}
