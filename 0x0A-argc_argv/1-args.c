#include <stdio.h>
#include "main.h"

/**
 * main -  prints the number of arguments passed into it
 * @argc: arguments supplied to the program
 * @argv: array of pointesrs to the arguments strings
 * Return: 0
 */
int main(int argc, char *argv[])
{
	(void) argv;
	printf("%i\n", argc - 1);

	return (0);
}
