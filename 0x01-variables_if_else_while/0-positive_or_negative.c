#include <stdlib.h>
#include <time.h>
#include <stdio.h>

/**
 * main - call other functions
 *This code checks the last number and print whether
 * it is zero, positive or negative
 *Author-EngineerPhoenix
 *Return: 0 always success
 */
int main(void)
{
int n;
srand(time(0));
n = rand() - RAND_MAX / 2;
/* your code goes there */
if (n > 0)
{
printf("%d is positive\n", n);
}
else if (n == 0)
{
printf("%d zero\n", n);
}
else
(n < 0)
{
printf("%d is negative\n", n);
}
return (0);
}
