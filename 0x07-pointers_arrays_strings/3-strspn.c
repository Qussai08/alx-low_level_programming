#include "main.h"

/**
 * _strspn - gets the length of a prefix substring
 * @s: source string
 * @accept: accepted string
 *
 * Return: unsigned int
 */

unsigned int _strspn(char *s, char *accept)
{
unsigned int i = 0, j, h = 0;

while (accept[i])
{
j = 0;
while (s[j] != ' ')
{
if (s[j] == accept[i])
{
h++;
}
j++;
}
i++;
}
return (h);
}
