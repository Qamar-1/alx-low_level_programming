#include <stdio.h>
/**
 * int factorial - Calculates the factorial of a number
 * using recursion
 * Author- Qamar
 * Return: 0  success
 */
int factorial(int n)
{
if (n == 0)
return (1);
if (n < 0)
return (-1);
return n * factorial(n-1);
}
