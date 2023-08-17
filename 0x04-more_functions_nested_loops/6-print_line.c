#include "main.h"

/**
 * print_line - prints a line
 * @n: the point from which the line will be drawn to 0
 *
 * Return: void
 */

void print_line(int n)
{
if (n > 0)
{
while (n--)
{
_putchar('_');	
}
_putchar('\n');
}
else
_putchar('\n');
}
