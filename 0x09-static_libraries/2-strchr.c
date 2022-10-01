#include "main.h"
/**
 * _strchr - function that locates a character in a string.
 * @s: source string
 * @c: string that will be searched
 * Return: Returns a pointer to the first occurence.
 */
char *_strchr(char *s, char c)
{
while (*s != 0)
{
if (*s == c)
{
return (s);
}
++s;
}
if (*s == c)
{
return (s);
}
return (0);
}
