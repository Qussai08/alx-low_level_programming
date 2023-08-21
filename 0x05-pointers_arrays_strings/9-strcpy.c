#include "main.h"

/**
 * _strcpy - copies the string to the buffer
 * @dest: the buffer
 * @src: the source string
 *
 * Return: char
 */

char *_strcpy(char *dest, char *src)
{
int i = 0;
while (src[i] != '\0')
{
dest[i] = src[i];
i++;
}
dest[i] = src[i];

return (dest);
}
