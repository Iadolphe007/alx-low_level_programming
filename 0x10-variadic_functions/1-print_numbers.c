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

	va_start(num, n);

	for (i = 0; i < n; i++)
	{
		numbers = va_arg(num, int);
		printf("%d", numbers);

		if (i != (n - 1) && separator != NULL)
			printf("%s", separator);
	}
	 va_end(num);
	 printf("\n");
}
