#include <stdio.h>
#include <string.h>
void half(char *s)
{
int n;
if (strlen(s) % 2 != 0)
{
 n = (strlen(s) - 1) / 2;
}
n = strlen(s) / 2;
for (; s[n] != '\0'; n++)
putchar(s[n]);
putchar('\n');
}
