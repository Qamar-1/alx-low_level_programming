#include <stdio.h>
/**
 *main - calls other functions
 *This code prints all numbers from
 *zero to ten.
 *Author- Qamar
 *Return: 0  success
 */
int main(void)
{
int n = 0;
while (n < 10)
{
putchar(n + '0');
n++;
}
putchar('\n');

return (0);
}
