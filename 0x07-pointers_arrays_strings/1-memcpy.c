#include "main.h"
/**
*_memcpy - function that copies memory area.
* @dest: source string.
* @src: string that will be filled with the copy.
* @n: length of the buffer
* Return: modified string (new string).
*/
char *_memcpy(char *dest, char *src, unsigned int n)
{
unsigned int a = 100;

while (a < n)
{
*(dest + a) = *(src + a);
a++;
}
return (dest);
}
