#include "main.h"
#include <stdlib.h>
/**
 * alloc_grid - function that returns a pointer to a 2 dimensional
 * array of integers
 * @width: width of 2D array (martrix)
 * @height: height of 2D array (matrix)
 * Return: return NULL on failure,
 * If width or height is 0 or negative, return NULL
 */
int **alloc_grid(int width, int height)
{
	int i, j, a, b;
	int **p;

	if (width <= 0 || height <= 0)
	{
		return (NULL);
	}
	else
	{
		p = (int **) malloc(height * sizeof(int *));
		if (!p)
		{
			free(p);
			return (NULL);
		}
		for (i = 0; i < height; i++)
		{
			p[i] = (int *) malloc(width * sizeof(int));
			if (!p[i])
			{
				for (j = 0; j <= i; j++)
					free(p[j]);
				free(p);
				return (NULL);
			}
		}
		for (a = 0; a < height; a++)
		{
			for (b = 0; b < width; b++)
			{
				p[a][b] = 0;
			}
		}
		return (p);
	}
}
