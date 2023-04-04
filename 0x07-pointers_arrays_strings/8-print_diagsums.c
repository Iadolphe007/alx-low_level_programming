#include <stdio.h>
#include "main.h"

/**
 * print_diagsums - print the sum of the diagonal
 * @a: pointer to the first element of the string
 * @size: string size
 */

void print_diagsums(int *a, int size)
{
	int i;
	int n;
	int sum_one;
	int sum_two;

	sum_one = 0;
	sum_two = 0;
	for (i = 0; i <= (size * size); i = i + size + 1)
		sum_one += a[i];

	for (n = size - 1; n <= (size * size) - size; n = n + size - 1)
	sum_two += a[n];

	printf("%d, %d\n", sum_one, sum_two);
}
