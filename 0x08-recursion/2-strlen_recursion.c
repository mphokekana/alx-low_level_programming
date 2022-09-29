#include "main.h"
/**
 * _strlen_recursion - Returns the length of a string.
 * @s: The string to be measurd using len.
 * Return: The length of the string (the len).
 */
int _strlen_recursion(char *s)
{
	int len = 0;

	if (*s)
	{
		len++;
		len += _strlen_recursion(s + 1);
	}
	return (len);
}
