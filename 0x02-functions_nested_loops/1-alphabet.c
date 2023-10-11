#include <main.h>
/**
*main - Entry point | calls other functions
*This code prints all English alphabets in lower case!
*Author- Qamar
*Return: 0  success
*/
void print_alphabet(void)
{
char letter;
for (letter = 'a'; letter <= 'z'; letter++)
{
_putchar(letter);
}
_putchar('\n');
}
