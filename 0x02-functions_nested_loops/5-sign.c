#include "main.h"

/**
*print_sign - prints the sign of a number, separated by comma
*and the equivalence to the output
*@n: number to be checked
*Author-EngineerPhoenix
*Return: +, 1, if positive, 0, 0 if 0, -1 , - if negative
*/
int print_sign(int n)
{
if (n == 0)
{
_putchar('0');
return (0);
}
else if (n < 0)
{
_putchar('-');
return (-1);
}
else
{
_putchar('+');
return (1);
}
}
