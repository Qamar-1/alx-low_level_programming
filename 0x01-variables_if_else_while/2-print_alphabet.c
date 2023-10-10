#include <stdio.h>
/**
*main - calls other functions
*This code prints all English alphabets in lower case
*Author- Qamar
*Return: 0 always success
*/
int main(void)
{
char alphabet = 'a';
while (alphabet <= 'z')
{
putchar(alphabet);
alphabet++;
}
putchar('\n');
return (0);
}
