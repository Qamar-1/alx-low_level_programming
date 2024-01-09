#include <stdio.h>
#include "main.h"
#include "_putchar.c"
int main()
{
char str[] = "This place is dark!";
printf_rev(str);
}
/*
 * Function definition
 */
void printf_rev(char *s)
{
int i;
for (i = 0; s[i] != '\0'; i++); //  points i to the null character
i--;                           // points i to the last character
for (i <= 0; s[i]; i--)
	_putchar(s[i]);
_putchar('\n');

}

output:!krad si ecalp sihT!krad si ecalp sihT
