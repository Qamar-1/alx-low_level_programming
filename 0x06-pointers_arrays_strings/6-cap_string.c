#include "main.h"
/**
 * cap_string - capitalizes all words of a string
 * @s: input string.
 * Return: the pointer to dest.
 */

char *cap_string(char *s)
{
int i = 0;
while (s[i] != '\0')
{
if ((i == 0 || s[i - 1] == ' ' || s[i - 1] == '\t' || s[i - 1] == '\n') &&
(s[i] >= 'a' && s[i] <= 'z'))
{
s[i] = s[i] - ('a' - 'A');
}
i++;
}

return (s);
}
