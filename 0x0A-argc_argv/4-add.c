#include <stdio.h>
#include <stdlib.h>
#include <ctype.h>
/**
 * main - multiplies the first 2 args
 * @argc: number of command line arguments.
 * @argv: array that contains the program command line arguments.
 * Return: 0 - success.
 */
int main(int argc,  char *argv[] )
{
int i;
for (i = 1; i < argc; i++)
{
int j;
for(j = 0; argv[i][j] != '\0';j++)
if (!isdigit(argv[i][j]))
{
printf("Error\n");
return (1);
}
else
printf("%d\n",atoi( argv[i]));
}
}
