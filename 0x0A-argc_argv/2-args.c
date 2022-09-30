#include <stdio.h>
#include "main.h"
/**
 * main - prints all arguments it receives.
 * @argc: arguments supplied to the program
 * @argv:  array of pointers to the arguments of strings
 * Return: 0
 */
int main(int argc, char *argv[])
{

	int arguments = 0;

	if (arguments > 0)
	{
		while (arguments < argc)
		{
			printf("%s\n", argv[arguments]);
			arguments++;
		}
	}
	return (0);
}
