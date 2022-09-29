#include "main.h"

/**
 * find_sqrt - find square root of number
 * @num: the number used to find the sqare root
 * @root: the root to be tested.
 * Return: If n does not have a natural square root, return -1
 */
int find_sqrt(int num, int root)
{
	if ((root * root) == num)
		return (root);

	if (root == num / 2)
		return (-1);

	return (find_sqrt(num, root + 1));
}

/**
 * _sqrt_recursion - returns the natural square root of a number
 * @n: natural square root
 * Return: If n does not have a natural square root, return -1
 */
int _sqrt_recursion(int n)
{
	int root = 0;

	if (n < 0)
		return (-1);

	if (n == 1)
		return (1);

	return (find_sqrt(n, root));
}
