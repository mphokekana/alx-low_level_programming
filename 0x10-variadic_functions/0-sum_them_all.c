#include <stdarg.h>
/**
 *sum_them_all - returns the sum of all its parameters
 *@n: number of a arguments to be sumed
 *Return: sum or 0
 */
int sum_them_all(const unsigned int n, ...)
{
	unsigned int sum = 0, a;
	va_list listarg;

	if (n == 0)
		return (0);

	va_start(listarg, n);

	for (a = 0; a < n; a++)
	{
		sum += va_arg(listarg, int);
	}
	va_end(listarg);

	return (sum);
}
