#include "main.h"

/**
 * Prototype: void jack_bauer(void);
 * Description: Prints every minute of the day of Jack Bauer
 */

void jack_bauer(void)
{
int h1;
int h2;
int m1;
int m2;

for (h1 = 0; h1 <= 2; h1++)
{
for (h2 = 0; h2 < 4; h2++)
{
for (m1 = 0; m1 < 6; m1++)
{
for (m2 = 0; m2 <= 9; m2++)
{
_putchar('0' + h1);
_putchar('0' + h2);
_putchar(':');
_putchar('0' + m1);
_putchar('0' + m2);
_putchar('\n');
}
}
}
}	
}
