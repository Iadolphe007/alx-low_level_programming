#include <stdlib.h>
#include <string.h>
#include <stdio.h>
#include "lists.h"

/**
 * pop_listint - delet from begginig
 * Return: 0
 * @head: point at the beginning of the node
 */

int pop_listint(listint_t **head)
{
	listint_t *temp;
	int value;

	if (head == NULL || *head == NULL)
		return (0);

	value = (*head)->n;
	temp = *head;
	*head = (*head)->next;
	free(temp);

	return (value);

}
