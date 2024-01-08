#include "main.h"

/**
 *_strlen - get the length of a string
 *@s: string in question
 *Author: Qamar
 *Return: length
 */

int _strlen(char *s)
{
int length;

for (s, length = 0; *s != '\0'; s++)
length++;
return (length);
}



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
