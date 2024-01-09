#include <stdio.h>
/**
 *swap_int - swaps 2 numbers
 *@a :first number
 *@b :second number
 *Author- Qamar
 *Return: 0  success
 */
void swap_int(int *a, int *b)
{
int temp = *a; // holds the value of a 
*a = *b; // assigns b the value of a
*b = temp;  // assigns b the initial value of a
}
/*
 * The main function below tests the function
 */
int main()
{
int a, b;
a = 12;
b = 20;
swap_int(&a,&b);
printf(" A is now %d, and B is now %d\n", a, b);
}
