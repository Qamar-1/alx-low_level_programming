#include <stdarg.h>
/**
 * sum_them_all - Calculate the sum of a variable number of integers.
 * @n: The number of integers to sum.
 *
 * Return: The sum of the integers.
 */
int sum_them_all(const unsigned int n, ...) {
if (n == 0)
return 0;
int sum = 0;  /* Initialize sum to zero */
int i = 0;
va_list ap;
va_start(ap, n);
for (i = 0; i < n; i++)
sum += va_arg(ap, int);
va_end(ap);
return sum;
}