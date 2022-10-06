#include "main.h"
#include <stdlib.h>

/**
 *array_range - function that creates an array of integers
 *@min: smallest integer
 *@max: largest integer
 *Return: the pointer to the newly created array
 *If min > max, return NULL
 *If malloc fails, return NULL
 */
int *array_range(int min, int max)
{
	int a, b;
	int *c;

	if (min > max)
		return (NULL);
	b = max - min + 1;
	c = malloc(sizeof(int) * b);
	if (c == NULL)
		return (NULL);
	for (a = 0; a < b; a++, min++)
	{
		c[a] = min;
	}
	return (c);
}
