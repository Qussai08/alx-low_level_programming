#include "main.h"

/**
  * times_table - Prints the 9 times table, starting with 0
  *
  * Return: empty output
  */

void times_table(void)
{
int i;
int j;

for (i  = 0; i <= 9; i++)
{
for (j = 0; j <= 9; j++)
{
int x = i * j;
if (x > 9)
{
_putchar(' ');
_putchar('0' + x / 10);
_putchar('0' + x % 10);
}
else
{
if (j != 0)
{
_putchar(' ');
_putchar(' ');
}
_putchar('0' + x);
}
if (j != 9)
_putchar(',');
}
_putchar('\n');
}
}
