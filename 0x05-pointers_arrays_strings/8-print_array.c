#include "main.h"
#include <stdio.h>
/**
 * print_array - print an array of integers
 * @a: array to print
 * @n: number of elements
 * Author: Qamar
 * Return: void
 */


void print_array(int *a, int n)
{
int i;

if (n > 0)
{
for (i = 0; i < n; i++)
printf("%d, ", a[i]);
}
}

