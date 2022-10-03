#include "main.h"
#include <stdlib.h>
#include <stdio.h>
/**
 *str_concat - function that concatenates two strings
 *@s1: pointer to first string
 *@s2: pointer to second string'
 *Return: retuirns pointer to the newly allocated space in memory
 *if NULL is passed, treat it as an empty string
 *The function should return NULL on failure
 */
char *str_concat(char *s1, char *s2)
{
	unsigned int length1, length2, size, a, b;
	char *p;

	if (s1 == NULL)
		s1 = "";
	if (s2 == NULL)
		s2 = "";

	length1 = 0;
	while (s1[length1] != '\0')
		length1++;
	length2 = 0;
	while (s2[length2] != '\0')
		length2++;

	size = length1 + length2;

	p = malloc((sizeof(char) * size) + 1);
	if (p == NULL)
		return (NULL);

	a = 0;
	while (a < length1)
	{
		p[a] = s1[a];
		a++;
	}
	b = 0;
	while (a <= size)
	{
		p[a] = s2[b];
		a++;
		b++;
	}
	return (p);
}
