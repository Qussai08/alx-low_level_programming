#include "main.h"

/** _memset - fills the memory with a constant byte
 * @s: points to some memory area
 * @b: constant byte to use to fill the memory
 * @n: first n bytes of the memory to be filled
 *
 * Return: char *
 */

char *_memset(char *s, char b, unsigned int n)
{
	unsigned int a;

	for (a = 0; a < n; a++)
	{
		s[a] = b;
	}

	return (s);
}
