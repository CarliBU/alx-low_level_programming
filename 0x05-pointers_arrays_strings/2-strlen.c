/**
*_strlen - returns length of a string
*
*@s: string to be counted
*
*Return: int
*/
int _strlen(char *s)
{
int count = 0;
while (1)
{
if (*s != '\0')
{
count += 1;
s++;
}
else
return (count);
}
}
