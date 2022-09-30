#include "main.h"
/**
 * _length - checks the length of a string
 * @s: is th string
 * Return: return the length of the string
 */
int _length(char *s)
{
	if (*s == '\0')
		return (0);
	return (1 + _length(s + 1));
}

/**
 * checkp - checks if the string is palindronme
 * @i: is the index
 * @lg: is the length of the string
 * @s: is the string
 * Return: 1 if is palindrome or 0 if not
 */
int checkp(int i, int lg, char *s)
{
	if (lg > 0)
	{
		if (s[i] == s[lg])
		{
			return (checkp(i + 1, lg - 1, s));
		}
		else if (s[i]  !=  s[lg])
		{
			return (0);
		}
		else
		{
			return (1);
		}
	}
	return (1);
}

/**
 * is_palindrome - checjs if a string is a palindrome
 * @s: is the string
 * Return: return 1 if string is palindrom or 0 if not
 */
int is _palindrome(char *s)
{
	return (checkp(0, _length(s) - 1, s));
}