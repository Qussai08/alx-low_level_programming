#include "main.h"

/**
 * puts_half - prints half of a string
 * @str: string that will be printed
 *
 * Return: void
 */

void puts_half(char *str)
{
int i = 0;
while (*(s + i) != '\0')
{
i++;
}

i /= 2;

while (s[i] != '\0')
{
_putchar(s[i]);
i++;
}
_putchar('\n');
}
