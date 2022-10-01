#include "main.h"
/**
 * _strncpy - Function copies a string.
 * @dest: buffer storing the string that has been copied
 * @src: the source string
 * @n: maximum numbwer of integer of byte copied
 * Return: returns a copy of the source string
 */

char *_strncpy(char *dest, char *src, int n)
{
	int i;

	for (i = 0; i < n && src[i] != '\0'; i++)
		dest[i] = src[i];

	for ( ; i < n; i++)
		dest[i] = '\0';

	return (dest);
}
