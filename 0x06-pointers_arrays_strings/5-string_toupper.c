#include "main.h"

/**
 * string_toupper - function that changes lowwercase to uppercase
 * @str: parameter
 *
 * Return: adress tp the string
 */

char *string_toupper(char *str)
{
	int index = 0;

	while (str[index] != '\0')
	{
		if (str[index] >= 'a' && str[index] <= 'z')
			str[index] -= 32;
	}

	return (str);
}
