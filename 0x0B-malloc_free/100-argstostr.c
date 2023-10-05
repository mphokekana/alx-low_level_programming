#include "main.h"
#include <stdlib.h>
/**
 * argstostr - function that concatenates all the arguments of your program
 * @ac: argument county
 * @av: pointer to array of size ac
 * Return: Returns NULL if ac == 0 or av == NULL
 * Returns a pointer to a new string, or NULL if it fails
 */
char *argstostr(int ac, char **av)
{
	int i, j, k, size;
	char *p;

	size = 0;
	k = 0;
	if (ac == 0 || av == NULL)
		return (NULL);

	i = 0;
	while (i < ac)
	{
		j = 0;
		while (av[i][j])
		{
			size++;
			j++;
		}
		size++;
		i++;
	}
	p = malloc((sizeof(char) * size) + 1);
	if (p == NULL)
		return (NULL);
	i = 0;
	while (i < ac)
	{
		j = 0;
		while (av[i][j])
		{
			p[k] = av[i][j];
			j++;
			k++;
		}
		p[k] = '\n';
		k++;
		i++;
	}
	p[k] = '\0';
	return (p);

}

