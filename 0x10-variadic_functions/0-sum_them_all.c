#include "variadic_functions.h"
#include <stdarg.h>
#include <stdio.h>
/**
 * sum_them_all - calculates the sum of parameters
 * @n: number of arguements
 *
 * Return: the result
 */
int sum_them_all(const unsigned int n, ...)
{
	unsigned int k;
	int sum = 0;
	va_list list;

	va_start(list, n);
	for (k = 0; k < n; k++)
		sum += va_arg(list, int);
	va_end(list);
	return (sum);
}
