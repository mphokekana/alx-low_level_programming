#include "main.h"

/**
 * string_toupper - function that changes lowwercase to uppercase
 * @str: character
 * Return: returns a character
 */

char *string_toupper(char *);
{
	int index = 0;
	while (srt[index++])
	{
		if (str[index] >= 'a' && str[index] <= 'z')
			str[index] -= 32;
	}

	return (str);
