#include "main.h"

/**
 * _strstr - locates a substring
 * @haystack: source string
 * @needle: substring to be located
 *
 * Return: char *
 */
char *_strstr(char *haystack, char *needle)
{       
int i = 0, j = 0;
char *s;
while (haystack[j])
{
if (needle[i] == haystack[j])
{
i++;
}
else
{
i = 0;
}
if(needle[i] == '\0')
{
s = needle;
break;
}
j++;
}
return (s);
}
