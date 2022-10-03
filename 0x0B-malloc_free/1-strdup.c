#include "main.h"
#include <stdlib.h>
/**
 *_strdup - a pointer to a newly allocated space in memory
 *which contains a copy of the string
 *@str: pointer to string being duplicated
 *Return: NULL if str = NULL
 *returns a pointer to a new string which is a duplicate of the string str
 *no success function returns a pointer to the duplicate string
 */
char *_strdup(char *str)
{
	char *nstr;
	unsigned int len, i;

	if (str == NULL)
	{
		return (NULL);
	}

	len = 0;
	while (str[len] != '\0')
	{
		len++;
	}

	nstr = malloc(sizeof(char) * (len + 1));

	if (nstr == NULL)
	{
		return (NULL);
	}

	for (i = 0; i < len; i++)
	{
		nstr[i] = str[i];
	}
	nstr[len] = '\0';
	return (nstr);

}
