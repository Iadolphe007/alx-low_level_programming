#include "main.h"
#include <stdio.h>
#include <stdlib.h>

/**
 * create_array -  returns a pointer to a character array
 * @size: size of the character array to be created
 * @c: specifies the size of the character array to be created
 * Return: array
 */

char *create_array(unsigned int size, char c)
{
	char *array = (char *)malloc(size * sizeof(char));

	unsigned int i;

	for (i = 0; i < size; i++)
	{
		if (array == NULL)
		{
			return (NULL);
		}
		array[i] = c;
	}
	return (array);
}
