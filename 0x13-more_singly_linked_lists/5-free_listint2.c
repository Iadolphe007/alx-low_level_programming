#include <stdlib.h>
#include <string.h>
#include "lists.h"
/**
 * free_listint2 - frees memory
 * @head: pointer to the first node in the linked list
 */

void free_listint2(listint_t **head)
{
	listint_t *current, *next;

	if (head == NULL)
		return;

	current = *head;
	while (current != NULL)
	{
		next = current->next;
		free(current);
		current = next;
	}
	*head = NULL;
}
