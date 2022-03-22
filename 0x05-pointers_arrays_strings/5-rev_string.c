#include <stdio.h>
#include <string.h>
/**
*rev_string - reverse a string
*
*@s: string to be reversed
*
*Return: void
*/
void rev_string(char *s)
{
char tmp;
char *pstart, *pend

pstart = str;
pend = pstart + strlen(str) - 1;

for (; pstart < pend; pstart++, pend--)
{
tmp = *pend;
*pend = *pstart;
*pstart = tmp;
}
}
