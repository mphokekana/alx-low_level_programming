#include "3-calc.h"
/**
 *main - check arguments
 *@argc: argument count
 *@argv: argument vertor
 *Return: error if number of arguments is wrong
 */
int main(int argc, char *argv[])
{
	int a = 0, b = 0, num = 0;
	char c;

	if (argc != 4)
	{
		printf("Error\n");
		exit(98);
	}
	if (argv[2][1] != '\0')
	{
		printf("Error\n");
		exit(98);
	}
	c = argv[2][0];
	if (c != '+' && c != '-' && c != '/' && c != '*' && c != '%')
	{
		printf("Error\n");
		exit(99);
	}

	a = atoi(argv[1]);
	b = atoi(argv[3]);
	num = (get_op_func(argv[2]))(a, b);
	printf("%d", num);
	return (0);
}
