#include "main.h"
/**
*print_alphabet_x10 - Entry point
*
*Return: Always 0 (Success)
*/
void print_alphabet_x10(void)
{
char c = 'a';
while (c < 10)
{
while (c <= 'z')
{
_putchar(c);
c++;
}
_putchar('\n');
}
}
