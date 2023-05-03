#include <stdio.h>
#include <stdlib.h>
#include "lists.h"


/**
 * print_listint_safe - print list
 * Return: count
 * @head: point to the first node of a linked list
 */

size_t print_listint_safe(const listint_t *head)
{
	const listint_t *curr = head;
	const listint_t *loop = NULL;
	size_t count = 0;

	while (curr != NULL)
	{
		printf("[%p] %d\n", (void *) curr, curr->n);
		count++;

		if (curr >= curr->next)
		{
			if (!loop)
			{
				loop = curr;
			}
			else if (curr == loop)
			{
				printf("-> [%p] %d\n", (void *) curr, curr->n);
				printf("[%p] %d\n", (void *) loop, loop->n);
				exit(98);
			}
		}
		curr = curr->next;
	}
	return (count);
}
