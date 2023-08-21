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
while (*(str + i) != '\0')
{
i++;
}

i /= 2;
if (i % 2 != 0)
i++;

while (str[i] != '\0')
{
_putchar(str[i]);
i++;
}
_putchar('\n');
}
