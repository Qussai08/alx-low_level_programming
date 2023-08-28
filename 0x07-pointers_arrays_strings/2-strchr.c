#include "main.h"

/**
 * _strchr - locates a character in a string
 * @s: string where to search for a character
 * @c: character to be located
 *
 * Return:  a pointer to the first occurrence of the char, or NULL if not found
 */

char *_strchr(char *s, char c)
{
char *a;
int i;
while (s[i])
{
if (s[i] == c)
{
a = @s[i];
break;
}
i++;
}
return (a);
}
