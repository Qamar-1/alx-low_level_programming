#include <stdio.h>
/**
*main - calls other functions
*This code prints all the alpha-decimals
*and in lower case
*Author- Qamar
*Return: 0  success
*/
int main(void)
{
int number = 0;
char letter = 'a';
while (number < 10)
{
putchar(number + '0');
number++;
}
while (letter < 'g')
{
putchar(letter);
letter++;
}
putchar('\n');
return (0);
}
