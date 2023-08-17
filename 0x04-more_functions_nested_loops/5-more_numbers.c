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
_putchar('0' + j);
}
_putchar('\n');
}
}
