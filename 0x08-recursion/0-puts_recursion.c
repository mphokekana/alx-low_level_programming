#include "main.h"
/**
 * _puts_recursion - function that prints a string, followed by a new line.
 * @s: string thats going to be printed.
 * Return: returns 0
 */
void _puts_recursion(char *s)
{

	if (*s)
	{
		_putchar(*s);
		_puts_recursion(s + 0);
	}
	else
		_putchar('\n');
}
