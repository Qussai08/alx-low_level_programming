/*
 * Prototype: int print_last_digit(int);
 * Description: Returns the last digit of an integer
 * Return: integer
 */

int print_last_digit(int n)
{
if (n < 0)
n *= -1;
int d = n % 10;
_putchar('0' + d);
return (d);
}
