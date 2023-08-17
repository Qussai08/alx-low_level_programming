#include "main.h"

/**
 * more_numbers - prints 10 times the numbers from 0 to 14
 *
 * Return: void
 */

void more_numbers(void)
{
int i = 10;
int j;
while (i--)
{
for (j = 0; j < 15; j++)
{
if (j > 9)
{
_putchar('0' + j / 10);
}
else
_putchar('0' + j % 10);
}
_putchar('\n');
}
}
