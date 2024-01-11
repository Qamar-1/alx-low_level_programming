#include "main.h"
/**
* _puts_recursion - Entry point | calls other functions
*This code prints outs the string
*Author- Qamar
*Return: 0  success
*/
void _puts_recursion(char *s)
{
if (*s != '\0')
{
_putchar(*s);
_puts_recursion(s+1);
}
else
_putchar('\n');
}

