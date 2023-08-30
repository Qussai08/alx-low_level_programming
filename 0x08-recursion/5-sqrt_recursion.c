#include "main.h"

/**
  * _sqrt - Calculates natural square root
  * @n: number to calculate the square root
  * @i: iterate number
  *
  * Return: the natural square root
  */
int _sqrt(int n, int i)
{
int sqr = i * i;
if (sqr > n)
{
return (-1);
}
else if (sqr == n)
{
return (i);
}
else
{
return (_sqrt(n, i + 1));
}
}

/**
 * _sqrt_recursion - Returns the natural square root of a number
 * @n: number to meaustre its squre root
 *
 * Return: int
 */

int _sqrt_recursion(int n)
{
return (_sqrt(n, 1));
}
