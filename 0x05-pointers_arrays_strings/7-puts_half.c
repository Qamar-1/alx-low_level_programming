#include <stdio.h>
#include <string.h>
#include "main.h"
void half(char *s)
{
int n;
if (_strlen(s) % 2 != 0)
{
 n = (_strlen(s) - 1) / 2;
}
n = _strlen(s) / 2;
for (; s[n] != '\0'; n++)
_putchar(s[n]);
_putchar('\n');
}
