#include "main.h"
#include <stdio.h>
/**
 * print_array  - funtion that print element of array integers
 * @a: first parameter
 * @n: second parameters
 */

void print_array(int *a, int n)
{
	int i;

	for (i = 0; i < n; i++)
	{
		printf("%d", a[i]);
		if (i != (n - 1))
		{
			printf(", ");
		}
	}
	printf("\n");
}
