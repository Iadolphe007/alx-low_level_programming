#include "variadic_functions.h"
#include <stdarg.h>
#include <stdlib.h>
#include <stdio.h>

/**
 *  print_numbers - print numbers
 *  @separator: separating string
 *  @n: number of string
 */

void print_numbers(const char *separator, const unsigned int n, ...)
{
	unsigned int i;
	int numbers;
	va_list num;

	numbers = 0;

	if (separator == NULL)
		exit(98);
	va_start(num, n);
	for (i = 0; i < n; i++)
	{
		numbers = va_arg(num, int);
		if (i > 0)
			printf("%s", separator);
		printf("%d", numbers);
	}
	 va_end(num);
	 printf("\n");
}
