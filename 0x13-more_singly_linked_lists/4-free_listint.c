#include <stdlib.h>
#include <string.h>
#include "lists.h"
/**
 * free_listint - frees memory
 * @head: point to the fisrt node
 */

void free_listint(listint_t *head)
{
	listint_t *next, *current = head;

	while (current != NULL)
	{
		next = current->next;
		free(current);
		current = next;

	}
}
