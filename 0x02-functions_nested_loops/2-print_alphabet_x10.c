/*
 * print_alphabet_x10 Function
 * Description: Print 10 times the Alphabet
 */

void print_alphabet_x10(void)
{
int i = 0;
while (i < 10)
{
char c = 'a';
while (c <= 'z')
{
_putchar(c++);
}
i++;
_putchar('\n');
}
}
