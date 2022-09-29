#include "main.h"

/**
 * is_divisible - checks if number is divisible
 * @num: The number to be checked
 * @div: divisor.
 * Return: 1 if the input integer is a prime number, otherwise 0
 */
int is_divisible(int num, int div)
{
	if (num % div == 0)
		return (0);

	if (div == num / 2)
		return (1);

	return (is_divisible(num, div + 1));
}
