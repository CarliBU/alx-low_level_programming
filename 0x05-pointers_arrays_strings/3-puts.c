/**
*_puts - prints a string + newline to standard output
*
*@str: string to be printed
*
*Return: void
*/
void _puts(char *str)
{
char *string = str;
while (*string != '\0')
{
putchar(*string);
s++;
}
putchar('\n');
}
