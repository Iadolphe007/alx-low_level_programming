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
	const char *p;
	char c;
	int i;
	float f;
	char *s;

	va_start(args, format);
	for (p = format; *p != '\0'; p++)
	{
		switch (*p)
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
				f = va_arg(args, double);
				printf("%f", f);
				break;
			case 's':
				s = va_arg(args, char *);
				if (s == NULL)
					printf("(nil)");
				else
					printf("%s", s);
				break;
			default:
				break;
		}
		if (*(p + 1) != '\0' && (*(p + 1) == 'c' || *(p + 1) == 'i' ||
					*(p + 1) == 'f' || *(p + 1) == 's'))
			printf(", ");
	}
	printf("\n");
	va_end(args);
}
