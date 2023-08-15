#include <stdio.h>
#include "main.h"

/**
 * Main - Entry point
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
printf("%ld, ", z);
}

return(0);
}
