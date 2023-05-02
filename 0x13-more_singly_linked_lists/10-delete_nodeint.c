#include <stdlib.h>
#include <string.h>
#include <stdio.h>
#include "lists.h"
/**
 * delete_nodeint_at_index - delete node at an index
 * @head: pointer to first node
 * @index: index of the node that should be deleted
 * Return: 1 or -1
 */

int delete_nodeint_at_index(listint_t **head, unsigned int index)
{
	listint_t *curr, *temp;
	unsigned int i;

	if (head == NULL || *head == NULL)
		return (-1);

	if (index == 0)
	{
		temp = *head;
		*head = (*head)->next;
		free(temp);
		return (1);
	}
	curr = *head;
	for (i = 0; i < index - 1; i++)
	{
		if (curr->next == NULL)
			return (-1);
		curr = curr->next;
	}
	temp = curr->next;
	if (temp == NULL)
		return (-1);
	curr->next = temp->next;
	free(temp);

	return (1);
}
