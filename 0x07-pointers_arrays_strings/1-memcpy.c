#include "main.h"

/**
 * _memcpy - copies memory area
 * @dest: the area to store copied memory area
 * @src: the memory area to be copied
 * @n: bytes of memory areas to be copied
 *
 * Return: char *
 */

char *_memcpy(char *dest, char *src, unsigned int n)
{
unsigned int i;

for (i = 0; i < n; i++)
dest[i] = src[i];

return (dest);
}
