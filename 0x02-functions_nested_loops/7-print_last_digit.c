#include "main.h"

/**
  * print_last_digit - Prints the last digit of a number
  * @n: The number to be treated
  *
  * Return: Value of the last digit of number
  */
int print_last_digit(int n)
{
int d;
if (n < 0)
n *= -1;
d = n % 10;
_putchar('0' + d);
return (d);
}
