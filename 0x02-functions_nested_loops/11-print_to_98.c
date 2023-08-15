#include<stdio.h>
/*
 * Prototype: void print_to_98(int n);
 * Numbers must be separated by a comma, followed by a space
 * Numbers should be printed in order
 * The first printed number should be the number passed to your function
 * The last printed number should be 98
 */

void print_to_98(int n)
{
for (n; n < 98; n++)
printf("%d, ", n);

printf("%d\n", 98);
}
