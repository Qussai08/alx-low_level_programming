#include "main.h"

/**
 * string_toupper - changes all lowercase letters of a string to uppercase
 *
 * Return: char *
 */

char *string_toupper(char *s)
{
int i, j = 0;
while (s[j] != '\0')
j++;

for (i = 0; i < j; i++)
{
if (s[i] >= 97 && s[i] <= 122)
s[i] -= 32;
}

return (s);
}
