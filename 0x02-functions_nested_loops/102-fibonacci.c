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
long j = 1;
long z = 2;
printf("%ld, %ld, ", j, z);
for (i = 0; i < 48; i++)
{
z += j;
j = z - j;
if (i == 47)
printf("%ld\n", z);
else
printf("%ld, ", z);
}

return (0);
}
