#include "main.h"
/**
* _memset - function that fills memory with a constant byte.
* @s: source string.
* @b: content of bits filled.
* @n: length of buffer.
* Return: a new string.
*/
char *_memset(char *s, char b, unsigned int n)
{
unsigned int a = 0;

while (a < n)
{
*(s + a) = b;
a++;
}
return (s);
}
