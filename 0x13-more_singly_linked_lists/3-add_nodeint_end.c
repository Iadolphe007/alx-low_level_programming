#include <stdlib.h>
#include <string.h>
#include "lists.h"

/**
 * add_nodeint_end - add new node at the end of list
 * @head: point to the first node
 * @n: intger parameter
 * Return: address of the added node
 */
listint_t *add_nodeint_end(listint_t **head, const int n)
{
	listint_t *new_node, *temp;

	new_node = malloc(sizeof(listint_t));
	if (new_node == NULL)
		return (NULL);
	new_node->n = n;
	new_node->next = NULL;

	temp = *head;
	if (!*head)
		*head = new_node;
	else
	{
		while (temp->next != NULL)
			temp = temp->next;
		temp->next = new_node;
	}

	return (new_node);

}
