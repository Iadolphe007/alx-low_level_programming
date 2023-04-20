#include <stdarg.h>
#include <stdio.h>
#include <stdio.h>
#include "variadic_functions.h"

/**
 * sum_them_all - print the sum of all parameters
 * @n: number of parameters
 * Return: always 0
 */

int sum_them_all(const unsigned int n, ...)
{
	unsigned int i, sum;
	va_list list;

	sum = 0;

	if (n == 0)
		return (0);
	va_start(list, n);

	for (i = 0; i < n; i++)
	{
		sum += va_arg(list, unsigned int);
	}
	va_end(list);
	return (sum);
}
