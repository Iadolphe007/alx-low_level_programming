#include "function_pointers.h"
#include <stddef.h>

/**
 * array_iterator - executes a function given as a parameter of an array
 * @array: array to iterate through
 * @size: size of the arrat
 * @action: pointer to function
 */


void array_iterator(int *array, size_t size, void (*action)(int))
{
	size_t i;

	for (i = 0; i < size; i++)
		if (array != NULL && action != NULL)
		{
			action(array[i]);
		}
}
