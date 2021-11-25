#include "main.h"

/**
 * close_fd - closes a file handle and exits program on failure
 * @fd: The file handle
 */
void close_fd(int fd)
{
	if (close(fd) == -1)
	{
		dprintf(STDERR_FILENO, "Error: Can't close fd %d", fd);
		exit(100);
	}
}

/**
 * copy_contents - Copies the contents from one file to another
 * @from_fd: The source file handle
 * @to_fd: The destination file handle
 * @src_file: The source file
 * @dest_file: The destination file name
 */
void copy_contents(int from_fd, int to_fd, char *src_file, char *dest_file)
{
	int i, c, buf_size = 1024;
	void *buf = malloc(sizeof(char) * buf_size);
	char *text1, *text2;

	if (buf != NULL)
	{
		for (i = 0; ; i += buf_size)
		{
			c = read(from_fd, buf, buf_size);
			if (c == 0)
				break;
			if (c < 0)
			{
				text1 = "Error: Can't read from file %s\n";
				dprintf(STDERR_FILENO, text1, src_file);
				exit(98);
			}
			if (write(to_fd, buf, c) != c)
			{
				text2 = "Error: Can't write to %s\n";
				dprintf(STDERR_FILENO, text2, dest_file);
				free(buf);
				exit(99);
			}
		}
		free(buf);
	}
}
/**
 * main - copies one file to the other
 * @argc: argument counter
 * @argv: arguments
 * Return: 1 or -1
 */

int main(int argc, char *argv[])
{
	int from_fd, to_fd;
	char *o, *t;

	if (argc != 3)
	{
		dprintf(STDERR_FILENO, "Usage: cp file_from file_to\n");
		exit(97);
	}
	to_fd = open(argv[2], O_WRONLY | O_TRUNC);
	if (to_fd < 0)
	{
		to_fd = open(argv[2], O_WRONLY | O_CREAT, 0664);
		if (to_fd < 0)
		{
			t = argv[2];
			dprintf(STDERR_FILENO, "Error: Can't write to %s\n", t);
			exit(99);
		}
	}
	from_fd = open(argv[1], O_RDONLY);
	if (from_fd < 0)
	{
		close_fd(to_fd);
		o = argv[1];
		dprintf(STDERR_FILENO, "Error: Can't read from file %s\n", o);
		exit(98);
	}
	copy_contents(from_fd, to_fd, argv[1], argv[2]);
	close_fd(from_fd), close_fd(to_fd);
	return (0);
}
