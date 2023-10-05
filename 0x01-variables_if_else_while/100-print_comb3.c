#include <stdio.h>
#include <stdlib.h>
/**
 * main - program printing all different combinations of two digits.:wq
 * Description: using a main function
 * this program prints "01, 02, 03, 04, 05, 06, 07, 08, 09, 12, 13, 14, 15, 16,
 * Return: 0
 */
int main(void)
{
int n1 = 0, n2;
while (n1 <= 9)
{
n2 = 0;
while (n2 <= 9)
{
if (n1 != n2 && n1 < n2)
{
	putchar(n1 + 48);
	putchar(n2 + 48);

if (n1 + n2 != 17)
{
	putchar(',');
	putchar(' ');
}
}
++n2;
}
++n1;
}

	putchar('\n');
return (0);
}

