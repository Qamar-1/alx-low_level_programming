#include "main.h"
/**
 * _puts - prints a string
 *@str: The char to be printed
 *Author- Qamar
 */

void _puts(char *str)
{
int i;
for (i = 0; str[i] != '\0'; i++)
{
_putchar(str[i]);
}
_putchar('\n');
}
