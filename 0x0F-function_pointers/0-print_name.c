#include <stdio.h>
#include "function_pointers.h"

/**
 * print_name - prints name
 * @name: person name
 * @f: function pointer
 */

void print_name(char *name, void (*f)(char *))
{
	printf("My name is %s. ", name);
	f(name);
}
