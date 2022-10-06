#include "main.h"
#include <stdlib.h>

/**
 *_print - moves a string one place to the left and prints the string
 *@str: string to move
 *@l: size of string
 *Return: void
 */
void _print(char *str, int l)
{
	int a, b;

	a = b = 0;
	while (a < l)
	{
		if (str[a] != '0')
			b = 1;
		if (b || a == l - 1)
			_putchar(str[a]);
		a++;
	}

	_putchar('\n');
	free(str);
}

/**
 *mul - multiplies a char with a string and places the  answer into dest
 *@n: char to multiply
 *@num: string to multiply
 *@num_index: last nonNULL index of num
 *@dest: destionation of multiplication
 *@dest_index: highest index to start addition
 *Return: pointer to dest, or NUUL on failure
 */
char *mul(char n, char *num, int num_index, char *dest, int dest_index)
{
	int c, d, mul, mulrem, add, addrem;

	mulrem = addrem = 0;
	for (c = num_index, d = dest_index; c >= 0; c--, d--)
	{
		mul = (n - '0') * (num[c] - '0') + mulrem;
		mulrem = mul / 10;
		add = (dest[d] - '0') + (mul % 10) + addrem;
		addrem = add / 10;
		dest[d] = add % 10 + '0';
	}
	for (addrem += mulrem; d >= 0 && addrem; d--)
	{
		add = (dest[d] - '0') + addrem;
		addrem = add / 10;
		dest[d] = add % 10 + '0';
	}
	if (addrem)
	{
		return (NULL);
	}
	return (dest);
}
/**
 * check_for_digits - checks - the argumentd to ensure they are digits
 *@av: pointer to arguments
 *Return: 0 if digits, 1 if not
 */
int check_for_digits(char **av)
{
	int e, f;

	for (e = 1; e < 3; e++)
	{
		for (f = 0; av[e][f]; f++)
		{
			if (av[e][f] < '0' || av[e][f] > '9')
				return (1);
		}
	}
	return (0);
}
/**
 * init - initalize a string
 *@str: string to initalize
 *@l: length of string
 *Return: void
 */
void init(char *str, int l)
{
	int g;

	for (g = 0; g < l; g++)
		str[g] = '0';
	str[g] = '\0'
}

/**
 * main - multiply two numbers
 *@argc: number of arguments
 *@argv: argument nector
 *Return: zero, or exit status of 98 if failure
 */
int main(int argc, char *argv[])
{
	int l1, l2, ln, ti, i;
	char *h;
	char *t;
	char j[] = "Error\n"

	if (argc != 3 || check_for_digits(argv))
	{
		for (ti = 0; j[ti]; ti++)
			_putchar(j[ti]);
		exit(98);
	}
	for (l1 = 0; argv[1][l1]; l1++)
		;
	for (l2 = 0; argv[2][l2]; l2++)
		;
	ln = l1 + l2 + 1;
	h = malloc(ln * sizeof(char));
	if (h == NULL)
	{
		for (ti = 0; j[ti]; ti++)
			_putchar(j[ti]);
		exit(98);
	}
	init(h, ln - 1);
	for (ti = l2 - 1, i = 0; ti >= 0; ti--, i++)
	{
		t = mul(argv[2][ti], argv[1], l1 - 1, h, (ln - 2) - i);
		if (t == NULL)
		{
			for (ti = 0; j[ti]; ti++)
				_putchar(j[ti]);
			free(h);
			exit(98);
		}
	}
	_print(h, ln - 1);
	return (0);
}
