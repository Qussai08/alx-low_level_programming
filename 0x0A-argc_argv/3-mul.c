#include "main.h"
#include <stdio.h>

/**
 * main - Multiplies two numbers
 * @argc: argument count
 * @argv: argument vector
 *
 * Return: Always zero
 */

int main(int argc, char *argv[])
{
if (argc > 2)
{
printf("%d\n", argv[1] * argv[2]);
}
else
{
printf("Error\n");
return (1);
}
return (0);
}
