#include <stdio.h>

int main(void)
{
int i = 3;
int sum = 0;

while (i < 1024)
{
if (i % 3 == 0 || i % 5 == 0)
sum += i;
i++;
}
printf("%d", sum);

return (0);
}
