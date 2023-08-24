#include "main.h"

/**
 * leet - encodes a string into 1337
 * @s: string to be encoded
 *
 * Return: char *
 */

char *leet(char *s)
{
char large[5] = {'A', 'E', 'O', 'T', 'L'};
char small[5] = {'a', 'e', 'o', 't', 'l'};
char leet[5] = {'4', '3', '0', '7', '1'};

int i = 0, j;

while (s[i] != '\0')
{
for (j = 0; j < 5; j++)
{
if (s[i] == large[j] || s[i] == small[j])
{
s[i] = leet[j];
j = 5;
}
}
i++;
}

return (s);
}
