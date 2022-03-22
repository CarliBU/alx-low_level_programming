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
for(i = strlen(str) - 1; i >= 0; i--)
{
putchar(str[i]);
}
putchar('\n');
}
