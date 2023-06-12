#include "main.h"

/**
 * read_textfile - reads text from a file and prints it
 * @filename: name of the file to read
 * @letters: number of the bytes to read
 *
 * Return: w- actual number of bytes read and printed 
 * 	0 when function fails or filename is NULL.
 */
ssize_t read_textfile(const char *filename, size_t letters)
{
	char *buf;
	ssize_t fd;
	ssize_t w;
	ssize_t t;

	fd = open(filename, O_RDONLY);
	if (fd == -1)
		return (0);
	buf = malloc(sizeof(char) * letters);
	t = read(fd, buf, letters);
	w = wirte(STDOUT_FILENO, buf, t);

	free(buf);
	close(fd);
	return (w);
}
