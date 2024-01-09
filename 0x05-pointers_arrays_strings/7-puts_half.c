#include <stdio.h>
#include <string.h>
void half(char *s)
{
if (strlen(s) % 2 != 0)
{
int n = (strlen(s) - 1) / 2;
}
int n = strlen(s) / 2;
for (; s[n] != '\0'; n++)
putchar(s[n]);
putchar('\n');
}
