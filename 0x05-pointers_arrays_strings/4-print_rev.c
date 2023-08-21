#include "main.h"

/**
 * print_rev - prints a string in reverse
 * @s: the string to be reversed
 *
 * Return: void
 */

void print_rev(char *s)
{
int i =  _strlen(s);

while ((s + i) >= s)
{
_putchar(*(s + i));
i--;
}
_putchar('\n');
}
