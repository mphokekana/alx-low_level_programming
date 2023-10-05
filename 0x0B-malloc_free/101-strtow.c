#include <stdlib.h>
#include <stdio.h>
/**
 * wordnos - counts number of words in a string
 * @s: string
 * Return: number of words in a string
 */
int wordnos(char *s)
{
	int a, b, c;

	a = 0;
	c = 0;

	for (b = 0; s[b] != '\0'; b++)
	{
		if (s[b] == ' ')
			a = 0;
		else if (a == 0)
		{
			a = 1;
			c++;
		}
	}

	return (c);
}
/**
 * **strtow - split a string into words
 * @str: string to be splitted
 * Return: pointer to array of string on success
 * or NULL (Error)
 */
char **strtow(char *str)
{
	char **d, *e;
	int f, g = 0, len = 0, words, h = 0, start, end;

	while (*(str + len))
		len++;
	words = wordnos(str);
	if (words == 0)
		return (NULL);

	d = (char **) malloc(sizeof(char *) * (words + 1));
	if (d == NULL)
		return (NULL);

	for (f = 0; f <= len; f++)
	{
		if (str[f] == ' ' || str[f] == '\0')
		{
			if (h)
			{
				end = f;
				e = (char *) malloc(sizeof(char) * (h + 1));
				if (e == NULL)
					return (NULL);
				while (start < end)
					*e++ = str[start++];
				*e = '\0';
				d[g] = e - h;
				g++;
				h = 0;
			}
		}
		else if (h++ == 0)
			start = f;
	}

	d[g] = NULL;

	return (d);
}

