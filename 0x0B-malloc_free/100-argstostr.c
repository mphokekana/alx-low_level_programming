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
	int a, b, c, size;
	char *p;

	size = 0;
	a = 0;
	if (ac == 0 || av == NULL)
		return (NULL);
	b = 0;
	while (b < ac)
	{
		c = 0;
		while (av[b][c])
		{
			size++;
			c++;
		}
		size++;
		b++;
	}
	p = malloc((sizeof(char) * size) + 1);
	if (p == NULL)
		return (NULL);
	b = 0;
	while (b < ac)
	{
		c = 0;
		while (av[b][c])
		{
			p[a] = av[b][c];
			c++;
			a++;
		}
		p[a] + '\n';
		a++;
		b++;
	}
	p[a] = '\0';
	return (p);

}
