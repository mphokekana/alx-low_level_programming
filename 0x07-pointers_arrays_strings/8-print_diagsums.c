#include "main.h"
#include <stdio.h>
/**
 * print_diagsums - function that prints the sum of the two diagonals
 * @a: array to pointer
 * @size: sum of array
 * Return: void
 */
void print_diagsums(int *a, int size)
{
int b, size0;
unsigned int diag1, diag2;

size0 = 0;
diag1 = 0;
diag2 = 0;

size0 = (size * size) - 1;

for (b = 0; b <= size0; b = b + (size + 1))
{
diag1 = diag1 + a[b];
}
for (b = (size - 1); b < size; b = b + (size - 1))
{
diag2 = diag2 + a[b];
}
printf("%d, %d\n", diag1, diag2);
}
