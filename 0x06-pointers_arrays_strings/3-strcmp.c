#include "main.h"

/**
 * _strcmp - compares two strings
 * @s1: first string
 * @s2: second string
 *
 * Return: int
 */

int _strcmp(char *s1, char *s2)
{
int i = 0, j = 0, c = 0, x;

while (s1[i] != '\0')
{
i++;
}
while (s2[j] != '\0')
{
j++;
}
if (j < i)
i = j;

while (c <= i)
{
if (s1[c] == s2[c])
{
c++;
}
else
{
return (s1[c] - s2[c]);
}
}
return (0);
}
