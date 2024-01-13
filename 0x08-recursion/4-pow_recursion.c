#include <stdio.h>
/**
 * int _pow_recursion - Calculate x raised to the power of y
 * using recursion
 * Author- Qamar
 * Return: 0  success
 */
int _pow_recursion(int x, int y)
{
if (y < 0)
return (-1);
if (y == 0)
return 1;
else
return x * _pow_recursion(x,(y-1));
return (0);
}

