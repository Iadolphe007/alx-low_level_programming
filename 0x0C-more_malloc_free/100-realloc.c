#include "main.h"
#include <stdlib.h>
#include <string.h>

/**
 * _realloc -  reallocates a memory block
 * @ptr: pointer to the memory block to be reallocated
 * @old_size: size of the memory block pointed to by ptr
 * @new_size:the new size of the memory block
 * Return:  a pointer to the reallocated memory block or null if it fails
 */

void *_realloc(void *ptr, unsigned int old_size, unsigned int new_size)
{
	void *new_ptr;
	size_t copy_size;

	if (new_size == 0)
	{
		free(ptr);
		return (NULL);
	}
	if (ptr == NULL)
	{
		new_ptr = malloc(new_size);
		return (new_ptr);
	}
	if (new_size == old_size)
	{
		return (ptr);
	}
	new_ptr = malloc(new_size);
	if (new_ptr == NULL)
	{
		return (NULL);
	}
	if (old_size < new_size)
		copy_size = old_size;
	else
		copy_size = new_size;

	memcpy(new_ptr, ptr, copy_size);
	free(ptr);
	return (new_ptr);
}
