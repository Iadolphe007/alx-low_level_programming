#include <stdio.h>
#include <stdlib.h>
#include <string.h>

/**
 * _calloc - allocate memory array
 * @nmemb: first argument
 * @size: second argument
 * Return: i
 */

void *_calloc(unsigned int nmemb, unsigned int size)
{
	int *i;

	if (nmemb == 0 || size == 0)
		return (NULL);

	i = malloc(size * nmemb);
	if (i == NULL)
		return (NULL);
	return (i);
}
