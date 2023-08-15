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
unsigned long j = 1;
unsigned long z = 2;
printf("%ld, %ld, ", j, z);
for (i = 0; i < 96; i++)
{
z += j;
j = z - j;
if (i == 95)
printf("%ld\n", z);
else
printf("%ld, ", z);
}

return (0);
}
