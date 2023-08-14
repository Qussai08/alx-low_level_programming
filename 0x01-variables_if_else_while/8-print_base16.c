#include <stdio.h>
/**
 * main - Entry point
 *
 * Description: 'the program's description'
 * Return: Always 0 (Success)
 */
int main(void)
{
int i = 0;
while (i < 10)
{
putchar('0' + i++);
}
while (i < 16)
{
putchar('a' + (i % 10));
i++;
}
putchar('\n');
return (0);
}
~                  
