iinclude "main.h"
/**
 *print_rev - the fuction created
 *@s : the string to be printed
 *This function prints all the string characters and in reverse
 *Author- Qamar
 *Return: 0  success
 */
void print_rev(char *s)
{
int i;
for (i = 0; s[i] != '\0'; i++); 
// The pointer now points to the null character
i--;
//The pointer now points to the last char of the string
for (; i >= 0; i--)
_putchar(s[i]);
_putchar('\n');
}
