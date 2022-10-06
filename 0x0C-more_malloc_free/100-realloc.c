#include "main.h"
#include <stdlib.h>

/**
 *_realloc - function that reallocates a memory block using malloc and free
 *@ptr: pointer to previous allocated memory
 *@old_size: old size of allocated space for ptr
 *@new_size: size of newly allocated space
 *Return: pointer to newly allocated memmory, or NULL if failure
 */
void *_realloc(void *ptr, unsigned int old_size, unsigned int new_size)
{
	char *a;
	unsigned int b, max = new_size;
	char *c = ptr;

	if (ptr == NULL)
	{
		a = malloc(new_size);
		return (a);
	}
	else if (new_size == 0)
	{
		free(ptr);
		return (NULL);
	}
	else if (new_size == old_size)
	return (ptr);

	a = malloc(new_size);
	if (a == NULL)
		return (NULL);
	if (new_size > old_size)
		max = old_size;
	for (b = 0; b < max; b++)
		a[b] = c[b];
	free(ptr);
	return (a);
}
