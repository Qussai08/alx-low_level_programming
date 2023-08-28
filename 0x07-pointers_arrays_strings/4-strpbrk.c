#include "main.h"

/**
 * _strpbrk - searches a string for any of a set of bytes
 * @s: string to be searched
 * @accept: accepted string
 *
 * Return: char *
 */

char *_strpbrk(char *s, char *accept)
{
int i = 0, j;
char *c;

while (s[i])
{
j = 0;
while (accept[j])
{
if (s[i] == accept[j])
{
c = &s[i];
}
j++;
}
if (c == &s[i])
break;
i++;
}
return (c);
}
