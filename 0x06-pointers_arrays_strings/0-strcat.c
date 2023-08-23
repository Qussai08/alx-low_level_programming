#include "main.h"

/**
 * *_strcat - concatenates two strings
 * @dest: destination string
 * @src: source string
 *
 * Return: string
 */

char *_strcat(char *dest, char *src)
{
int i, j = 0, h = 0;
while (src[j] != '\0')
j++;

while (dest[h] != '\0')
h++;

for (i = 0; i < j; i++)
{
dest[h] = src[i];
h++;
}

return (dest);
}
