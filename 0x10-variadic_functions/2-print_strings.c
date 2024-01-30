/*
 * File: 2-print_strings.c
 * Auth: Kamoru Ridwanullah
 */

#include "variadic_functions.h"
#include <stdio.h>
#include <stdarg.h>


/**
 * print_strings - Prints strings, followed by a new line.
 * @separator: The string to be printed between strings.
 * @n: The number of strings passed to the function.
 * @...: A variable number of strings to be printed.
 *
 * Description: If separator is NULL, it is not printed.
 * If one of the strings if NULL, (nil) is printed instead.
 */


void print_strings(const char *separator, const unsigned int n, ...)
{
int i;
char *string =NULL;
va_list alx;
va_start(alx,n);
for (i = 0; i < n; i++)
{
string = va_arg(alx,char*);
if (separator == NULL)
printf("%s", string);
else
if (string == NULL)
printf("(nil)");
else
printf("%s%s", string, separator);
}
printf("\n");
va_end(alx);
}
