#include "lists.h"
#include <stdlib.h>
#include <string.h>
/**
 * listint_len - return number of element
 * @h: parameter
 * Return: number of element
 */
size_t listint_len(const listint_t *h)
{
	size_t i = 0;

	for (; h != NULL; i++)
	{
		h = h->next;
	}
	return (i);
}
