#include <stdio.h>
/**
 * main - prints all args passed to main.
 * @argc: number of command line arguments.
 * @argv: array that contains the program command line arguments.
 * Return: 0 - success.
 */
int main(int argc,  char *argv[] __attribute__((unused)) )
{
int i;
for (i = 0; i < argc; i++)
{
if (i >= 0)
printf("%s\n", argv[i]);
}
return (0);
}
