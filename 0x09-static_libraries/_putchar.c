#include <unistd.h>

/**
 * _putchar - writes the character c to standad output
 * @c: The character to point
 * Return: 1 if successful, -1 if not
 */
int _putchar(char c)
{
	return (write(1, &c, 1));
}
