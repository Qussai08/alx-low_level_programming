#include <stdio.h>
#include "main.h"

/**
 * main - Entry point
 *
 * Return: Always 0
 */

int main(void)
{
int i;
unsigned long long int j = 1, z = 2;
printf("%llu, %llu, ", j, z);
for (i = 0; i < 96; i++)
{
z += j;
j = z - j;
if (i == 95)
printf("%llu\n", z);
else
printf("%llu, ", z);
}

return (0);
}
