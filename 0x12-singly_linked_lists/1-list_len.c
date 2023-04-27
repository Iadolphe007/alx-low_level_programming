#include "lists.h"
#include <stddef.h>
/**
 * list_len - print number of element in linked list
 * @h: paramter
 * Return: number of elements in linked list
 */

size_t list_len(const list_t *h)
{
	size_t i = 0;
	const list_t *current = h;

	while (current != NULL)
	{
		i++;
		current = current->next;
	}
	return (i);
}
