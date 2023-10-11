#include "main.h"

/**
 *print_alphabet_x10 - prints the  alphabets in lower case
 *10 times followed by a new line
 *Author-Qamar
 *Return: void
 */
void print_alphabet_x10(void)
{
int i, j;
j = 0;
while (j < 10)
{
for (i = 97; i <= 122; i++)
_putchar(i);
_putchar('\n');
j++;
}
}
