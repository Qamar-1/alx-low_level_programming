#include <stdio.h>
/**
 * main - prints its name the number of args passed to argv
 * @argc: number of command line arguments.
 * @argv: array that contains the program command line arguments.
 * Return: 0 - success.
 */
int main(int argc, __attribute__((unused))  char *argc[])
{
printf("%d\n", argc -1);
return (0);
}
