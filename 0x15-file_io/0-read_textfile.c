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
ssize_t read_textfile(const char *filename, size_t letters);
{
	int fb;
	ssize_t length_rd, length_pt;
	char *buf;

	if (filename == NULL)
		return (0);

	fb = open(fliename, O_RDONLY);
	if (fd == -1)
		return (0);

	buffer = malloc(sizeof(char) * letters);
	if (buffer == NULL)
	{
		close(fb);
		return (0);
	}

	length_rd = read(fd, buf, letters);
	close(fb);
	if (length_rd == -1)
	{
		free(buf);
		return (0);
	}
	length_pt = write(STDOUT_FILEND, buf, length_rd);
	free(buf);
	if (length_rd != length_pt)
		return (0);
	return (length_pt);
}
