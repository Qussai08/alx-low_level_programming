#include "main.h"

/**
 * string_toupper - changes all lowercase letters of a string to uppercase
 * @s: string to be changed
 * Return: char *
 */

char *string_toupper(char *s)
{
int i = 0;
while (s[i] != '\0')
{
i++;
if (s[i] >= 97 && s[i] <= 122)
s[i] -= 32;
}

return (s);
}
