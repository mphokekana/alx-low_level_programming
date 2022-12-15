#include "main.h"
/**
 *_strncat - concatenate two strings but use inputted bytes
 * @dest: the string to append appen
 * @src: string to be complete at the end of the dest
 * @n: integer to be compared to the index
 * Return: returns new concatenated string
 */

char *_strncat(char *dest, char *src, int n)
{
	int index = 0, dest_len = 0;

	while (dest[index++])
		dest_len++;

	for (index  = 0; src[index] && index < n; index++)
		dest[dest_len++] = src[index];

	return (dest);
}
