#include "main.h"
/**
 * _putchar - write the charater c to the standard output.
 * @c: character to be printed.
 * Return: 1 if succesfull and -1 if error
 */
int _putchar(char c)
{
	return (write(1, &c, 1));
}

