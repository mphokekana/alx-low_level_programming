#include "main.h"

/**
 * get_endianness - that checks the endianness
 * Return: 0 if big endian, 1 if little endian
 */
int get_endianness(void)
{
	unsigned int a;
	char *ptr;

	a = 1;
	ptr = (char *) &a;

	return ((int)*ptr);
}
