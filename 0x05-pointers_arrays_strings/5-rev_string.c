#include "main.h"

/**
 * rev_string - reverses a string
 * @s: string to be reversed
 *
 * Return: void
 */

void rev_string(char *s)
{
int i = 0;
char *a;
a = s;

while (s[i] != '\0')
{
i++;
}

i -= 1;

while (i >= 0)
{
a[i] = s[i];
i--;
}
while (s[i] != '\0')
{
s[i] = a[i];
i++;
}
}
