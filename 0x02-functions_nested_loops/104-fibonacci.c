#include <stdio.h>

int main(void)
{
int i;
long j = 1;
long z = 2;
printf("%ld, %ld, ", j, z);
for (i = 0; i < 96; i++)
{
z += j;
j = z - j;
printf("%ld, ", z);
}

return(0);
}
