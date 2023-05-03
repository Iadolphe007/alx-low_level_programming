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
	listint_t *prev = NULL;
	listint_t *next;


	while (current != NULL)
	{
		next = current->next;
		current->next = prev;
		prev = current;
		current = next;
	}
	*head = prev;
	return (*head);
}
