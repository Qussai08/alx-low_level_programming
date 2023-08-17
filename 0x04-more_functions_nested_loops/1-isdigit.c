#include "main.h"

/**
 * _isdigit: checks whether the input is digit or not
 * @c: the input to be checked
 *
 * Return: 1 if digit 0 otherwise
 */

int _isdigit(int c)
{
if (c > 47 && c < 58)
return (1);

return (0);
}
