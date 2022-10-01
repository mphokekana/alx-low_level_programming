#include "main.h"
/**
* _strspn - function that gets the length of a prefix substring
* @s: source string (original string)
* @accept: bits from accept.
* Return: returns the number of bytes in the initial segment.
*/
unsigned int _strspn(char *s, char *accept)
{
unsigned int a, b;

for (a = 0; *(s + a); a++)
{
for (b = 0; *(accept + b); b++)
{
if (*(s + a) == *(accept + b))
break;
}
if (*(accept + b) == '\0')
break;
}
return (a);
}
