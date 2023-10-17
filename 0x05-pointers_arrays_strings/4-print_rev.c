#include "main.h"
/**
 *print_rev - the fuction created
 *@s - the string to be printed
 *This function prints all the string
 *characters and in reverse 
 *Author- Qamar
 *Return: 0  success
 */
void print_rev(char *s) {

int i;
for (i = 0; s[i] != '\0'; i++)
{
}
i--;
for (; i >= 0; i--){
if (i == 0){
_putchar('\n');
}
else 
_putchar(s[i]);
}
}
