#include <stdio.h>
#include <string.h>
/**
*print_rev - prints a string in reverse + new line
*
*@s: sting to print in reverse
*
*Return: void
*/
void print_rev(char *s)
{
int i;
for(i = strlen(s) - 1; i >= 0; i--)
{
putchar(s[i]);
}
putchar('\n');
}
