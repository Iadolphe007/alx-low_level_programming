#include "variadic_functions.h"
#include <stdio.h>
#include <stdarg.h>
#include <stdlib.h>
/**
 * print_strings - prints strings
 * @separator: separate string
 * @n: number of string
 */

void print_strings(const char *separator, const unsigned int n, ...)
{
	va_list list;
	unsigned int i;
	const char *str;

	if (n == 0)
		printf("\n");

	if (separator == NULL)
		separator = "";

	va_start(list, n);
	for (i = 0; i < n; i++)
	{
		str = va_arg(list, const char *);
		if (str == NULL)
			printf("nil");
		printf("%s", str);

		if (i < n - 1)
			printf("%s", separator);
	}
	printf("\n");
	va_end(list);
}
