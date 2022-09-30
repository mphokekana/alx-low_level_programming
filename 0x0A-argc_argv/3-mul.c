#include "main.h"
#include <stdlib.h>
#include <stdio.h>

/**
 * main - program that multiplies two numbers.
 * @argc: argument count
 * @argv: argument vertical
 * Return: 0 if success and 1 if error
 */
int main(int argc, char *argv[])
{
    int i, j;
    if (argc == 3)
    {
        i = atoi(argv[2]);
        j = atoi(argv[2]);
        printf("%d\n", i * j);
        return (0);
    }
    printf("error\n");
    return (1);
}
