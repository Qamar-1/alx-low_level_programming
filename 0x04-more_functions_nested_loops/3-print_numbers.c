#include "main.h"
/**
 * print_numbers - prints numbers (0 - 9)
 * Author- Qamar
 * Return: 0  success
 */
void print_numbers(void)
{
int i;
for (i = 0 ; i <= 9 ; i++)
{
_putchar(i + '0');
}
_putchar('\n');
}
