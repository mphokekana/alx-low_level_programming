#include "main.h"
#include <stdlib.h>
/**
 *create_array - creates an array of chars, and initializes
 *@size: size of the array
 *@c: character to initalize array with
 *Return: NULL if size = 0, a pointer to the array, or NULL if it fails
 */
char *create_array(unsigned int size, char c)
{
	char *p;
	unsigned int a;

	if (size == 0)
	{
		return (NULL);
	}

	p = malloc(sizeof(char) * size);

	if (p == NULL)
		return (NULL);

	for (a = 0; a < size; a++)
	{
		p[a] = c;
	}

	return (p);
}

