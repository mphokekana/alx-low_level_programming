#include "main.h"
/**
 * print_chessboard - a function that prints the chessboard
 * @a: arrays of pointers
 * Returns: a chessboard (0)
 */
void print_chessboard(char (*a)[8])
{
int b, c;

for (b = 0; b <= 7; b++)
{
for (c = 0; c <= 7; c++)
{
_putchar(a[b][c]);
}
_putchar(10);
}
}
