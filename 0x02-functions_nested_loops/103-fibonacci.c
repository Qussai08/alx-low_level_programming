#include <stdio.h>

int main(void)
{
int i;
long j = 1;
long z = 2;
long sum = z;

while (z < 4000000)
{
z += j;
j = z - j;
if (z % 2 == 0)
sum += z;
}
printf("%ld", sum);
return(0);
}
