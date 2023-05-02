#include <stdlib.h>
#include <string.h>
#include <stdio.h>
#include "lists.h"
/**
 * insert_nodeint_at_index - add node at index
 * @head: point to the first nide
 * @idx: first parameter
 * @n: second parameter
 * Return: address pf the new node
 */

listint_t *insert_nodeint_at_index(listint_t **head, unsigned int idx, int n)
{
	listint_t *new_node, *curr;
	unsigned int i;

	curr = *head;

	if (head == NULL)
		return (NULL);
	if (idx == 0)
	{
		new_node = malloc(sizeof(listint_t));
		if (new_node == NULL)
			return (NULL);

		new_node->n = n;
		new_node->next = *head;
		*head = new_node;
		return (new_node);

	}
	for (i = 0; i < idx - 1; i++)
	{
		if (curr == NULL)
			return (NULL);
		curr = curr->next;

	}
	if (curr == NULL)
		return (NULL);
	new_node = malloc(sizeof(listint_t));
	if (new_node == NULL)
		return (NULL);

	new_node->n = n;
	new_node->next = curr->next;
	curr->next = new_node;

	return (new_node);
}
