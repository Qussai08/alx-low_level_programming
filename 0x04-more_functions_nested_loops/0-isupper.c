#include "main.h"

/**
 * _isupper - check if a letter is uppercase or not
 * @c: the number to be checked
 *
 * Return: 1 if uppercase 0 otherwise.
 */

int _isupper(int c)
{
if (c > 64 && c < 91)
return (1);
else
return (0);
}
