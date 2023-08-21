#include "main.h"

/**
 * swap_int - takes two pointers and swaps the values they point to
 * @a: first pointer
 * @b: second pointer
 *
 * Return: void
 */

void swap_int(int *a, int *b)
{
int t;
t = *a;
*a = *b;
*b = t;
}
