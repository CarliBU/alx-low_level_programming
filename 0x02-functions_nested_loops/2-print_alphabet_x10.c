#include "main.h"
/**
*print_alphabet_x10 - Entry point
*
*Return: Always 0 (Success)
*/
void print_alphabet_x10(void)
{
int c;
int count;

count = 0;
while (count < 10)
{
for (c = 'a' ; c <= 'z'; c++)
{
_putchar(c);
}
count++;
_putchar('\n');
}
}
