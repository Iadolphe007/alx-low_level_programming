#include "variadic_functions.h"
#include <stdarg.h>
#include <stdio.h>
#include <stdlib.h>
/**
 * print_all - fucntion which print anything
 * @format: types of arguments passed to the function
 */
void print_all(const char * const format, ...)
{
	va_list args;
	char *s, c;
	int i, printed;
	float f;
	const char *frmt = format;

	printed = 0;
	va_start(args, format);
	while (*frmt)
	{
		switch (*frmt++)
		{
			case 'c':
				c = va_arg(args, int);
				printf("%c", c);
				break;
			case 'i':
				i = va_arg(args, int);
				printf("%d", i);
				break;
			case 'f':
				f = (float) va_arg(args, double);
				printf("%f", f);
				break;
			case 's':
				s = va_arg(args, char *);
				if (s == NULL)
					printf("(nil)");
				printf("%s", s);
				break;
		}
		if (*format && printed)
			printf(", ");
		printed = 1;
	}
	printf("\n");
	va_end(args);
}
