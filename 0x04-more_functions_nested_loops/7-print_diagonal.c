#include "main.h"

/**
 * print_diagonal - Prints a diagonal on the consol
 * @n: the length of the diagonal
 *
 * Return: void
 */

void print_diagonal(int n)
{
int i;
int temp = n - 1;
while (n--)
{
i = temp - n;
if (n < 0)
{
break;
}
while (i--)
{
_putchar(' ');
}
_putchar(92);
_putchar('\n');
}
_putchar('\n');
}
