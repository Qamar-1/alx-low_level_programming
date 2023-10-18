#include "main.h"
/**
 * _strlen - get the length of a string
 * @s: string to get length
 * Author: Qamar
 * Return: length
 */
int _strlen(char *s)
{
char *cpy;
int length;

for (cpy = s, length = 0; *cpy != '\0'; cpy++)
length++;
return (length);
}

/**
 * puts_half -  print the other half of a string
 * @str: string to print
 * Author: Qamar
 *Return: void
 */
void puts_half(char *str)
{
int n;
n = _strlen(str) % 2 == 0 ? _strlen(str) / 2 : (_strlen(str) - 1) / 2;
for (; n < _strlen(str); n++)
_putchar(*(str + n));
}
