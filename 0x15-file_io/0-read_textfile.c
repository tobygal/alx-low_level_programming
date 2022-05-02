#include "main.h"

/**
 * read_textfile - read a text and print to standard output
 * @filename: the filename
 * @letters: the number of byte to be written
 * Return: the count of letter on sucess, 0 on failure
 */

ssize_t read_textfile(const char *filename, size_t letters)
{
	int fd;
	ssize_t text, out;
	char *buf;

	if (filename == NULL)
		return (0);

	fd = open(filename, O_RDONLY);

	if (fd == -1)
		return (0);
	buf = malloc(sizeof(char) * letters);

	if (buf == NULL)
	{
		free(buf);
		return (0);
	}

	text = read(fd, buf, letters);
	out = write(STDOUT_FILENO, buf, text);

	free(buf);
	close(fd);
	return (out);
}
