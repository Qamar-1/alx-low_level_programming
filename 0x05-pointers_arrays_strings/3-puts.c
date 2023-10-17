#include "main.h"
/**
 *void _puts - prints a string
 *This code prints all the characters of a string
 *@s: The char to be printed 
 *Author- Qamar
 */

void _puts(char *str){
int i;
for (i = 0; str[i] != '\0'; i++)
{
_putchar(str[i]);
}
putchar('\n');
}
