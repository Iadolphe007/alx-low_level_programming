#include <stdlib.h>
#include <string.h>
#include "lists.h"
/**
 * sum_listint - retyrn sum of linked list
 * @head: point to the first node
 * Return: sum of linked list
 */

int sum_listint(listint_t *head)
{
	int sum;
	listint_t *current = head;


	if (head == NULL)
		return (0);
	sum = 0;

	while (current)
	{
		sum += current->n;
		current = current->next;
	}
	return (sum);
}

