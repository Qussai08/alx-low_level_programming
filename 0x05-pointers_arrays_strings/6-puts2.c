#include "main.h"

/**
 * _puts2 - prints every other character of a string followed by a new line
 * @str: the string to be printed
 *
 * Return: void
 */

void puts2(char *str)
{
int i = 0;
while (*(str + i) != '\0')
{
_putchar(*(str + i));
i += 2;
}
_putchar('\n');
}
