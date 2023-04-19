#include <stdio.h>
#include <stdio.h>
#include "function_pointers.h"
/**
 * int_index - compare integer
 * @array: contain integer
 * @size: size of arrat
 * @cmp: function pointer
 * Return: integer
 */

int int_index(int *array, int size, int (*cmp)(int))
{
	int i;

	for (i = 0; i < size; i++)
	{
		if (size <= 0)
			return (-1);

		if (cmp(array[i]) != 0)
			return (i);
	}
	return (-1);
}
