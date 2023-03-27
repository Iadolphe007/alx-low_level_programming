#include "main.h"
#include <stdio.h>

/**
 * swap_int -  function which swap two variable
 * @a: the first argement
 * @b: second argument
 */

void swap_int(int *a, int *b)
{
	int c;

	c = *a;
	*a = *b;
	*b = c;
}
