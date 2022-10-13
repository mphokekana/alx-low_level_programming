#include <stdio.h>
#include <stdarg.h>
#include <stdlib.h>
/**
 *print_strings - prints strings followed by a new line.
 *@separator: string to be printed between strings
 *@n: number of strings
 *Return: void
 */
void print_strings(const char *separator, const unsigned int n, ...)
{
	unsigned int a;
	char *b;
	va_list strings;

	if (separator == NULL)
		separator = "";

	va_start(strings, n);

	for (a = 0; a < n; a++)
	{
		b = va_arg(strings, char *);

		if (b == NULL)
			b = "(nil)";
		printf("%b", b);
		if (a < n - 1)
		{
			printf("%s", separator);
		}
	}
	printf("\n");
	va_end(strings);
}
