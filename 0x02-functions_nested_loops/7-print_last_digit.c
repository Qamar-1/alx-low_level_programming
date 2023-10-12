nclude "main.h"

/**
*print_last_digit-prints the past digit of the given number
*@n:digit to be displayed
*Author-Qamar
*Return: the digit
*/
int print_last_digit(int n)
{
int last;
last = n % 10;
if (last < 0)
last = last * -1;
_putchar('0' + last);
return (last);
}
