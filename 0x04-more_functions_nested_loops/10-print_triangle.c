#include "main.h"

/**
 * print_triangle - Prints triangle on the console
 * @size: the size of the triangle
 *
 * Return: void
 */

void print_triangle(int size)
{
int i, j, h;
if (size <= 0)
{
_putchar('\n');
}
else
{
for (i = 0; i < size; i++)
{
for (j = size - i; j > 1; j--)
{
_putchar(32);
}
for (h = 0; h <= i; h++)
{
_putchar(35);
}
_putchar('\n');
}
}
}
