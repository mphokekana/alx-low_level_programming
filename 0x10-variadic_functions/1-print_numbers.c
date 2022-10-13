#include <stdio.h>
#include <stdarg.h>
#include <stdlib.h>
/**
 *print_numbers - prints numbers followed by a new line
 *@separator: string to be printed between numbers
 *@n: nunmber of integers passed to the function
 *Return: void
 */
void print_numbers(const char *separator, const unsigned int n, ...)
{
	unsigned int a;
	va_list nums;

	va_start(nums, n);

	for (a = 0; a < n; a++)
	{
		printf("%d", va_arg(nums, int));
		if (a < n - 1 && separator != NULL)
			printf("%s", separator);
	}
	printf("\n");

	va_end(nums);
}
