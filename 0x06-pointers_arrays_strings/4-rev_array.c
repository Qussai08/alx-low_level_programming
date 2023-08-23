#include "main.h"

/**
 * reverse_array - reverse elements of an array
 * @a: the array to be reversed
 * @n: the number of elements of the array
 *
 * Return: void
 */

void reverse_array(int *a, int n)
{
int i, temp;

for (i = 0; i < n / 2; i++)
{
temp = a[i];
a[i] = a[n - 1 - i];
a[n - 1 - i] = temp;
}
}
