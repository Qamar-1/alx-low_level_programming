#include "main.h"



/**
 *rev_string - reverse a string
 *@s: string in question
 *Author: Qamar
 *Return: void
 */
void rev_string(char *s)
{
int i, j;

for (i = 0, j = _strlen(s) - 1; i < j; j--, i++)
{
char c;
c = *(s + j);
s[j] = s[i];
s[i] = c;
}
}
