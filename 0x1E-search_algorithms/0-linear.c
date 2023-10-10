#include "search_algos.h"
/**
 * linear_search - search value in array
 * @size: number of element in array
 * @array: pointer to the first element of array
 * @value: the value to search
 * Return: index of value or -1
 */


int linear_search(int *array, size_t size, int value)
{
	size_t i;
	int index = -1;

	if (array == NULL)
	{
		return (-1);
	}
	for (i = 0; i < size; i++)
	{
		printf("value checked array[%lu] = [%d]\n", i, array[i]);
		if (array[i] == value)
		{
			index = i;
		}
	}
	return index;
}
