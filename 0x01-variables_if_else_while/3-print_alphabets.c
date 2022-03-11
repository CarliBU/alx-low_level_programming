#include <stdio.h>
#include <ctype.h>
/**
* main - Entry point
*
* Return: Always 0 (Success)
*/
int main(void)
{
int i = 'a';
while (i <= 'z')
{
putchar(i);
i++;
}
i = 'a';
while (i <= 'z')
{
putchar(toupper(i));
i++;
}
putchar('\n');
return (0);
}
