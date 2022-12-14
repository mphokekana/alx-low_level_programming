#include "main.h"
#include <unistd.h>
#include <sys/types.h>
#include <sys/stat.h>
#include <fcntl.h>
#include <stdlib.h>

/**
 * read_textfile -  reads a text file and prints it to the POSIX
 * standard output
 * @filename: name of file to read
 * @letters: number of lettters it should read and print
 * Return: returns the actual number of letters it could read and print
 */
ssize_t read_textfile(const char *filename, size_t letters)
{
	int fd;
	ssize_t length_r, length_w;
	char *buf;

	if (filename == NULL)
		return (0);

	fd = open(filename, O_RDONLY);
	if (fd == -1)
		return (0);

	buf = malloc(sizeof(char) * letters);
	if (buf == NULL)
	{
		close(fd);
		return (0);
	}

	length_r = read(fd, buf, letters);
	close(fd);
	if (length_r == -1)
	{
		free(buf);
		return (0);
	}
	length_w = write(STDOUT_FILENO, buf, length_r);
	free(buf);
	if (length_r != length_w)
		return (0);
	return (length_w);
}
