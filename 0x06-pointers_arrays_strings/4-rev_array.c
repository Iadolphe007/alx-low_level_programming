#include "main.h"
/**
 * reverse_array - reverse element of the array
 * @n: number of element of the array
 * @a: funtion parameter
 */


void reverse_array(int *a, int n)
{
	int i;
	int j;

	for (i = 0; i < n / 2 ; i++)
	{
		j = a[i];
		a[i] = a[n - 1 - i];
		a[n - 1 - i] = j;
	}


}
