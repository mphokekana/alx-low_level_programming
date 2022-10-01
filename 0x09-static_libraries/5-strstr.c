#include "main.h"
/**
 * _strstr - function that locates a substring.
 * @haystack: string to be searched.
 * @needle: string thats being searched for.
 * Return: returns a pointer to the beginning of the located substring.
 **/

char *_strstr(char *haystack, char *needle)
{
char *s1, *s2;

while (*haystack != '\0')
{
s1 = haystack;
s2 = needle;

while (*haystack != '\0' && *s2 != '\0' && *haystack == *s2)
{
haystack++;
s2++;
}
if (*s2 == '\0')
return (s1);
haystack = s1 + 1;
}
return (0);
}
