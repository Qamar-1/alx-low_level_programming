/**
 * print_reverse_recursive - Prints a string in reverse order using recursion.
 * @s: Pointer to the string to be printed in reverse.
 * This function uses recursion to print the characters of a string in reverse order.
 */
#include "main.h"
void _print_rev_recursion(char *s)
{
if (*s != '\0')
{
_print_rev_recursion(s + 1);
_putchar(*s);
}
}
