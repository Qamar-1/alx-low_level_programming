#include <stdio.h>
#include <stdlib.h>
/**
 * main - multiplies the first 2 args
 * @argc: number of command line arguments.
 * @argv: array that contains the program command line arguments.
 * Return: 0 - success.
 */
int main(int argc,  char *argv[] __attribute__((unused)) )
{
if (argc == 3)
printf("%d\n", (atoi(argv[1]) * atoi(argv[2])));
else
{
printf("Error\n");
return (1);
}
return (0);
}
