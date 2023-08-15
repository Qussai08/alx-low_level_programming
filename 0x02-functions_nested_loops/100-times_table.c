/*
 * Prototype: void print_times_table(int n);
 * If n is greater than 15 or less than 0 the function should not print anything
 */

void print_times_table(int n)
{
if (n > 15 || n < 0)
return;

int i;
int j;

for (i  = 0; i <=n; i++)
{
for (j = 0; j <= n; j++)
{
int x = i * j;

if (x > 99)
{
_putchar(' ');
_putchar('0' + x / 100);
_putchar('0' + (x / 10) % 10);
_putchar('0' + x % 10);
}

else if (x > 9)
{
_putchar(' ');
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
_putchar(' ');
}
_putchar('0' + x);
}
if (j != n)
_putchar(',');
}
_putchar('\n');
}
}
