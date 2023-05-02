#include <stdlib.h>
#include <string.h>
#include <stdio.h>
#include "lists.h"
/**
 * get_nodeint_at_index - return indexed node
 * @head: point to the first node
 * @index: position to call
 * Return: 0
 */


listint_t *get_nodeint_at_index(listint_t *head, unsigned int index)
{
	listint_t *current = head;
	unsigned int i;

	for (i = 0; i < index && current != NULL; i++)
	{
		current = current->next;
	}
	return (current);
}
