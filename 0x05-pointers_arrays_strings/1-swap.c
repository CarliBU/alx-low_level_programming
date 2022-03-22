/**
*swap_int - swaps the values of two integers
*
*@a: to be switched with b
*@b: to be switched with a
*
*Return: void
*/
void swap_int(int *a, int *b)
{
int tmp = *a;

*a = *b;
*b = tmp;
}
