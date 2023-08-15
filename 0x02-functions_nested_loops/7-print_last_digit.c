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
d = n % 10;
if (d < 0)
d *= -1;
 
_putchar('0' + d);
return (d);
}
