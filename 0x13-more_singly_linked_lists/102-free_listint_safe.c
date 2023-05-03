#include <stdlib.h>
#include <string.h>
#include "lists.h"

/**
 * free_listint_safe - free memory
 * @h: pointer to the first node
 * Return: count
 */


size_t free_listint_safe(listint_t **h)
{
	size_t count = 0;
	listint_t *curr = *h;
	listint_t *next;

	while (curr != NULL)
	{
		count++;
		next = curr->next;
		free(curr);
		if (next >= curr)
		{
			*h = NULL;
			exit(98);
		}
		curr = next;
	}
	*h = NULL;
	return (count);
}
