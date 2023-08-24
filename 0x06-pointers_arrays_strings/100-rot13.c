#include "main.h"

/**
 * rot13 - is a simple letter substitution cipher
 * @s: string to be encrypted
 *
 * Return: char *
 */

char *rot13(char *s)
{
int i = 0;
while (s[i])
{
while ((s[i] >= 97 && s[i] <= 122) || (s[i] >= 65 && s[i] <= 90))
{
if ((s[i] >= 78 && s[i] <= 90) || (s[i] >= 110 && s[i] <= 122))
{
s[i] -= 13;
break;
}
s[i] += 13;
break;
}
i++;
}
return (s);
}
