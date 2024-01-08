#include "main.h"
/**
 * puts2 - prints every second character of a string
 * @str: string to print
 * Author: Qamar
 *Return: void
 */

void puts2(char *str)
{
int i;
for (i = 0; str[i] != '\0';i+2)
_putchar(str[i]);
}
_putchar('\n');
}
int main()
{
char str = "0123456789";
char r = puts2(str);
printf("%s\n ", r);

}
