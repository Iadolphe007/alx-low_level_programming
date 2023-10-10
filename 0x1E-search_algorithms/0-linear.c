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

	if (array == NULL)
	{
		return (-1);
	}
	for (i = 0; i < size; i++)
	{
		printf("value checked array[%li] = [%i]\n", i, array[i]);
		if (array[i] == value)
		{
			return (i);
		}
	}
	if (i == size)
	{
		return (-1);
	}
	return (i);
}
