#include "main.h"

/**
 * create_file - creates a file
 * @filename: filename
 * @text_context: content written in it fails
 * Return: 1 on success, -1 on failure
 */
int create_file(const char *filename, char *text_content)
{
	int fd, NumbOfLetter, wrt;

	if (!filename)
		return (-1);

	fd = open(filename, O_CREAT | O_WRONLY | O_TRUNC, 0600);

	if (fd == -1)
		return (-1);

	if (!text_content)
		text_content = "";

	for (NumbOfLetters = 0; text_content[nletters]; NumbOfletters++)
		;
	wrt = write(fd, text_content, NumbOfLetters);

	if (wrt == -1)
		return (-1);

	close(fd);

	return (1);
}
