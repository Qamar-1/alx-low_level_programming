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
if (n > 0)
{
int i;
for (i = 0; i < n; i++)
{
if (i < (n - 1))
      printf("%d, ", a[i]);
else
	printf("%d\n",a[i]);
}
}
else 
printf("Array is empty");
}
