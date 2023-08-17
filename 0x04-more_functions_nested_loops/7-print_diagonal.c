#include "main.h"

/**
 * print_diagonal - Prints a diagonal on the consol
 * @n: the length of the diagonal
 *
 * Return: void
 */

void print_diagonal(int n)
{
int i = 1;
while (n--)
{
if (n < 0)
{
n = 0;
continue;
}
while (i--)
{
_putchar(' ');
}
_putchar(92);
}
_putchar('\n');
}
