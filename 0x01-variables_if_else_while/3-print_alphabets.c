#include <stdio.h>
/**
 *main - calls other functions
 *This code prints all English alphabets
 *in lower case and upper case
 *Author- Qamar
 * Return: 0  success
 */
int main(void)
{
char alphabet_lower = 'a';
char alphabet_upper = 'A';
while (alphabet_lower <= 'z')
{
putchar(alphabet_lower);
alphabet_lower++;
}

while (alphabet_upper <= 'Z')
{
putchar(alphabet_upper);
alphabet_upper++;
}
putchar('\n');
return (0);
}
