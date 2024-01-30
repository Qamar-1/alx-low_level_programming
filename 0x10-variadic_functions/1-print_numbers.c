/*
 * File: 1-print_numbers.c
 * Author: Kamoru Ridwanullah
 */
#include "variadic_functions.h"
#include <stdarg.h>
#include <stdio.h>

/**
 * print_numbers - Prints numbers, followed by a new line.
 * @separator: The string to be printed between numbers.
 * @n: The number of integers passed to the function.
 * @...: A variable number of numbers to be printed.
 */

void print_numbers(const char *separator, const unsigned int n, ...) 
{
unsigned int i;
int value;
va_list alx;
va_start(alx, n);
for (i = 0; i < n; i++)
{
value = va_arg(alx,int);
if (separator == NULL)
printf("%d",value);
else 
{
if (i == (n-1))
printf("%d ",value);
else
printf("%d%s ", value, separator);
}
}
printf("\n");
va_end(alx);
}
