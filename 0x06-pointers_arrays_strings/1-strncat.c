#include "main.h"

/**
 * *_strncat - concatenates two strings
 * @dest: destination string
 * @src: source string
 * @n: the number of bytes to be concatenated
 *
 * Return: string
 */

char *_strncat(char *dest, char *src, int n)
{
int i, j = 0, h = 0;
while (src[j] != '\0' && j < n)
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
