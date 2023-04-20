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
	char *str;

	if (separator == NULL)
		exit(98);
	va_start(list, n);
	str = 0;
	for (i = 0; i < n; i++)
	{
		str = va_arg(list, char *);
		if (i > 0)
			printf("%s", separator);
		if (str == NULL)
			printf("nil");
		printf("%s", str);
	}
	printf("\n");
	va_end(list);
}
