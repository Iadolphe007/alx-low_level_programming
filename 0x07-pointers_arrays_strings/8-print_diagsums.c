#include "main.h"
#include <stdio.h>

/**
 * print_diagsums - print the sum of two diagonals
 * @a: array pointer
 * @size: size of array
 */

void print_diagsums(int *a, int size)
{
	int sum_one;
	int sum_two;
	int i;

	for (i = 0; i < size; i++)
	{
		sum_one += a[i * size + i];
		sum_two += a[i * size + (size - i - 1)];
	}
	printf("%d, %d\n", sum_one, sum_two);
}
