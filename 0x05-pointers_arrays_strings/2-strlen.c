#include <stdio.h>
/**
 *_strlen -This is   to check the last string character
 *@s :the string to be
 *Author- Qamar
 *Return: 0  success
 */
int _strlen(char *s)
{
int length = 0;  // stores the length.
int i;
for (i = 0; s[i] != '\0'; i++)
length++;
return (length);
}
int main()
{
char str[] ="Ramadan's coming soon";
int r =_strlen(str);
printf("%d\n", r);

}
