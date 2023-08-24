#include "main.h"

/**
 * cap_string - Capitalize all words of a string
 * @s: string to be capitalized
 *
 * Return: char *
 */

char *cap_string(char *s)
{
int i, j = 0;
int cspc = 13;
char spc[] = {32, '\t', '\n', 44, ';', 46, '!', '?', '"', '(', ')', '{', '}'};

while (s[j] != '\0')
{
for (i = 0; i < cspc; i++)
{
if ((s[j] >= 97 && s[j] <= 122) && (s[j - 1] == spc[i] || j == 0))
s[j] -= 32;
}
j++;
}
return (s);
}
