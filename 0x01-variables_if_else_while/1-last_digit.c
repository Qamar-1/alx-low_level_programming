/**
 *main - call other functions
 *This code checks the last number and provides
 *information about it
 *Author- Qamar
 *Return: 0 success
 */
#include <stdlib.h>
#include <time.h>
#include <stdio.h>

int main(void)
{
int n, Last_digit;

srand(time(0));
n = rand() - RAND_MAX / 2;
Last_digit = n % 10;
if (Last_digit > 5)
printf("Last digit of %d is %d and is greater than 5" n, Last_digit);
else if (Last_digit == 0)
{
printf("Last digit of %d is 0 and is 0" n);
}
else
{
printf("Last digit of %d is %d and is less than 6 and not 0" n, Last_digit);
}
return (0);
}
