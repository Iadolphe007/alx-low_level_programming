#include <stdlib.h>
#include <string.h>
#include "lists.h"

/**
 * reverse_listint - rever the linked list
 * @head: point to the first node
 * Return: a pointer to the first node of the reversed list
 */
listint_t *reverse_listint(listint_t **head)
{
	listint_t *current = *head;
	listint_t *temp;


	while (current && (temp = current->next))
	{
		current->next = temp->next;
		temp->next = *head;
		*head = temp;
	}
	return (*head);
}
